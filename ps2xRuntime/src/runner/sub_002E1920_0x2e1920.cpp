#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E1920
// Address: 0x2e1920 - 0x2e1bc0
void sub_002E1920_0x2e1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1920_0x2e1920");
#endif

    switch (ctx->pc) {
        case 0x2e1978u: goto label_2e1978;
        case 0x2e19b0u: goto label_2e19b0;
        case 0x2e19bcu: goto label_2e19bc;
        case 0x2e1a7cu: goto label_2e1a7c;
        case 0x2e1b2cu: goto label_2e1b2c;
        default: break;
    }

    ctx->pc = 0x2e1920u;

    // 0x2e1920: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e1920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e1924: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e1928: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e1928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e192c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e1930: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x2e1930u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1934: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e1934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e1938: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2e1938u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e193c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e1940: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2e1940u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1944: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e1944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e1948: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e1948u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e194c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e1950: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e1950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1958: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e1958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e195c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1960: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2e1960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2e1964: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1968: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e1968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e196c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e196cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1974: 0x24847190  addiu       $a0, $a0, 0x7190
    ctx->pc = 0x2e1974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29072));
label_2e1978:
    // 0x2e1978: 0x90830031  lbu         $v1, 0x31($a0)
    ctx->pc = 0x2e1978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2e197c: 0x14600080  bnez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x2E197Cu;
    {
        const bool branch_taken_0x2e197c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E197Cu;
        // 0x2e1980: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e197c) {
            ctx->pc = 0x2E1B80u;
            goto label_2e1b80;
        }
    }
    ctx->pc = 0x2E1984u;
    // 0x2e1984: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2e1984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2e1988: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2e1988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e198c: 0x24427190  addiu       $v0, $v0, 0x7190
    ctx->pc = 0x2e198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29072));
    // 0x2e1990: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e1990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e1994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1998: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e1998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e199c: 0x240606c0  addiu       $a2, $zero, 0x6C0
    ctx->pc = 0x2e199cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1728));
    // 0x2e19a0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e19a4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2e19a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e19a8: 0xc049590  jal         func_125640
    ctx->pc = 0x2E19A8u;
    SET_GPR_U32(ctx, 31, 0x2E19B0u);
    ctx->pc = 0x2E19ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E19A8u;
    // 0x2e19ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2E19A8u, 0x2E19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E19B0u;
label_2e19b0:
    // 0x2e19b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e19b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19b4: 0xc0b81ac  jal         func_2E06B0
    ctx->pc = 0x2E19B4u;
    SET_GPR_U32(ctx, 31, 0x2E19BCu);
    ctx->pc = 0x2E19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E19B4u;
    // 0x2e19b8: 0xaf908ab0  sw          $s0, -0x7550($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E06B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E06B0u, 0x2E19B4u, 0x2E19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E19BCu;
label_2e19bc:
    // 0x2e19bc: 0x93a400a8  lbu         $a0, 0xA8($sp)
    ctx->pc = 0x2e19bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e19c0: 0x32c5ffff  andi        $a1, $s6, 0xFFFF
    ctx->pc = 0x2e19c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x2e19c4: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e19c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e19c8: 0xa0640030  sb          $a0, 0x30($v1)
    ctx->pc = 0x2e19c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e19cc: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e19d0: 0xa0740032  sb          $s4, 0x32($v1)
    ctx->pc = 0x2e19d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 20));
    // 0x2e19d4: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e19d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e19d8: 0xa0730033  sb          $s3, 0x33($v1)
    ctx->pc = 0x2e19d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 51), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e19dc: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e19e0: 0xa0720038  sb          $s2, 0x38($v1)
    ctx->pc = 0x2e19e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 18));
    // 0x2e19e4: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e19e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e19e8: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E19E8u;
    {
        const bool branch_taken_0x2e19e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19E8u;
        // 0x2e19ec: 0xa0750601  sb          $s5, 0x601($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1537), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19e8) {
            ctx->pc = 0x2E1A88u;
            goto label_2e1a88;
        }
    }
    ctx->pc = 0x2E19F0u;
    // 0x2e19f0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E19F0u;
    {
        const bool branch_taken_0x2e19f0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2E19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19F0u;
        // 0x2e19f4: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19f0) {
            ctx->pc = 0x2E1A04u;
            goto label_2e1a04;
        }
    }
    ctx->pc = 0x2E19F8u;
    // 0x2e19f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e19f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e19fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E19FCu;
    {
        const bool branch_taken_0x2e19fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19FCu;
        // 0x2e1a00: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19fc) {
            ctx->pc = 0x2E1A1Cu;
            goto label_2e1a1c;
        }
    }
    ctx->pc = 0x2E1A04u;
label_2e1a04:
    // 0x2e1a04: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2e1a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e1a08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e1a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1a10: 0x0  nop
    ctx->pc = 0x2e1a10u;
    // NOP
    // 0x2e1a14: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2e1a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e1a18: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2e1a18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2e1a1c:
    // 0x2e1a1c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2e1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1a20: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2e1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2e1a24: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2e1a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2e1a28: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e1a2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e1a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1a34: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2e1a34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2e1a38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e1a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e1a3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e1a3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1a40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1A40u;
    {
        const bool branch_taken_0x2e1a40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1a40) {
            ctx->pc = 0x2E1A58u;
            goto label_2e1a58;
        }
    }
    ctx->pc = 0x2E1A48u;
    // 0x2e1a48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1a48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e1a4c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2e1a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e1a50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1A50u;
    {
        const bool branch_taken_0x2e1a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A50u;
        // 0x2e1a54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a50) {
            ctx->pc = 0x2E1A74u;
            goto label_2e1a74;
        }
    }
    ctx->pc = 0x2E1A58u;
label_2e1a58:
    // 0x2e1a58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e1a58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e1a5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e1a60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1a60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e1a64: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2e1a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e1a68: 0x0  nop
    ctx->pc = 0x2e1a68u;
    // NOP
    // 0x2e1a6c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2e1a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2e1a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e1a74:
    // 0x2e1a74: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2E1A74u;
    SET_GPR_U32(ctx, 31, 0x2E1A7Cu);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2E1A74u, 0x2E1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A7Cu;
label_2e1a7c:
    // 0x2e1a7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1A7Cu;
    {
        const bool branch_taken_0x2e1a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A7Cu;
        // 0x2e1a80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a7c) {
            ctx->pc = 0x2E1A90u;
            goto label_2e1a90;
        }
    }
    ctx->pc = 0x2E1A84u;
    // 0x2e1a84: 0x0  nop
    ctx->pc = 0x2e1a84u;
    // NOP
label_2e1a88:
    // 0x2e1a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a8c: 0x0  nop
    ctx->pc = 0x2e1a8cu;
    // NOP
label_2e1a90:
    // 0x2e1a90: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1a94: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x2e1a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x2e1a98: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E1A98u;
    {
        const bool branch_taken_0x2e1a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A98u;
        // 0x2e1a9c: 0xa4650602  sh          $a1, 0x602($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1538), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a98) {
            ctx->pc = 0x2E1B38u;
            goto label_2e1b38;
        }
    }
    ctx->pc = 0x2E1AA0u;
    // 0x2e1aa0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1AA0u;
    {
        const bool branch_taken_0x2e1aa0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AA0u;
        // 0x2e1aa4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1aa0) {
            ctx->pc = 0x2E1AB4u;
            goto label_2e1ab4;
        }
    }
    ctx->pc = 0x2E1AA8u;
    // 0x2e1aa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e1aa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1aac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1AACu;
    {
        const bool branch_taken_0x2e1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AACu;
        // 0x2e1ab0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1aac) {
            ctx->pc = 0x2E1ACCu;
            goto label_2e1acc;
        }
    }
    ctx->pc = 0x2E1AB4u;
label_2e1ab4:
    // 0x2e1ab4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e1ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e1ab8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e1ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1ac0: 0x0  nop
    ctx->pc = 0x2e1ac0u;
    // NOP
    // 0x2e1ac4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2e1ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e1ac8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2e1ac8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2e1acc:
    // 0x2e1acc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2e1accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1ad0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2e1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2e1ad4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2e1ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2e1ad8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e1ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e1adc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e1adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1ae4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2e1ae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2e1ae8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e1ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e1aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e1aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1af0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1AF0u;
    {
        const bool branch_taken_0x2e1af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1af0) {
            ctx->pc = 0x2E1B08u;
            goto label_2e1b08;
        }
    }
    ctx->pc = 0x2E1AF8u;
    // 0x2e1af8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e1afc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2e1afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e1b00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1B00u;
    {
        const bool branch_taken_0x2e1b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B00u;
        // 0x2e1b04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b00) {
            ctx->pc = 0x2E1B24u;
            goto label_2e1b24;
        }
    }
    ctx->pc = 0x2E1B08u;
label_2e1b08:
    // 0x2e1b08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e1b08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e1b0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e1b10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e1b14: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2e1b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e1b18: 0x0  nop
    ctx->pc = 0x2e1b18u;
    // NOP
    // 0x2e1b1c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2e1b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2e1b20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e1b24:
    // 0x2e1b24: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2E1B24u;
    SET_GPR_U32(ctx, 31, 0x2E1B2Cu);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2E1B24u, 0x2E1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B2Cu;
label_2e1b2c:
    // 0x2e1b2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1B2Cu;
    {
        const bool branch_taken_0x2e1b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B2Cu;
        // 0x2e1b30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b2c) {
            ctx->pc = 0x2E1B40u;
            goto label_2e1b40;
        }
    }
    ctx->pc = 0x2E1B34u;
    // 0x2e1b34: 0x0  nop
    ctx->pc = 0x2e1b34u;
    // NOP
label_2e1b38:
    // 0x2e1b38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e1b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b3c: 0x0  nop
    ctx->pc = 0x2e1b3cu;
    // NOP
label_2e1b40:
    // 0x2e1b40: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1b44: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x2e1b44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e1b48: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1b4c: 0xa07e0039  sb          $fp, 0x39($v1)
    ctx->pc = 0x2e1b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 30));
    // 0x2e1b50: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2e1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e1b54: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1b58: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1B58u;
    {
        const bool branch_taken_0x2e1b58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B58u;
        // 0x2e1b5c: 0xac64060c  sw          $a0, 0x60C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b58) {
            ctx->pc = 0x2E1B70u;
            goto label_2e1b70;
        }
    }
    ctx->pc = 0x2E1B60u;
    // 0x2e1b60: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1b64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E1B64u;
    {
        const bool branch_taken_0x2e1b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B64u;
        // 0x2e1b68: 0xa4710034  sh          $s1, 0x34($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b64) {
            ctx->pc = 0x2E1B90u;
            goto label_2e1b90;
        }
    }
    ctx->pc = 0x2E1B6Cu;
    // 0x2e1b6c: 0x0  nop
    ctx->pc = 0x2e1b6cu;
    // NOP
label_2e1b70:
    // 0x2e1b70: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1b74: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2e1b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e1b78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1B78u;
    {
        const bool branch_taken_0x2e1b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B78u;
        // 0x2e1b7c: 0xa4640034  sh          $a0, 0x34($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b78) {
            ctx->pc = 0x2E1B90u;
            goto label_2e1b90;
        }
    }
    ctx->pc = 0x2E1B80u;
label_2e1b80:
    // 0x2e1b80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e1b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e1b84: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x2e1b84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e1b88: 0x1460ff7b  bnez        $v1, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2E1B88u;
    {
        const bool branch_taken_0x2e1b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B88u;
        // 0x2e1b8c: 0x248406c0  addiu       $a0, $a0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b88) {
            ctx->pc = 0x2E1978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1978;
        }
    }
    ctx->pc = 0x2E1B90u;
label_2e1b90:
    // 0x2e1b90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e1b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e1b94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e1b94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e1b98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e1b98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1b9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e1b9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e1ba0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e1ba0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1ba4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e1ba4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1ba8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1ba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1bac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BB8u;
        // 0x2e1bbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1BC0u;
}
