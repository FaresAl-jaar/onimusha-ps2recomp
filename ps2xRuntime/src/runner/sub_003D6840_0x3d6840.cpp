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

// Function: sub_003D6840
// Address: 0x3d6840 - 0x3d6a58
void sub_003D6840_0x3d6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6840_0x3d6840");
#endif

    switch (ctx->pc) {
        case 0x3d693cu: goto label_3d693c;
        case 0x3d6958u: goto label_3d6958;
        case 0x3d6994u: goto label_3d6994;
        case 0x3d699cu: goto label_3d699c;
        case 0x3d6a18u: goto label_3d6a18;
        default: break;
    }

    ctx->pc = 0x3d6840u;

    // 0x3d6840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d6844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d6844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d6848: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d684c: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3d684cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d6850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d6850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6854: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3d6854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d6858: 0x10a4006b  beq         $a1, $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x3D6858u;
    {
        const bool branch_taken_0x3d6858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3D685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6858u;
        // 0x3d685c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6858) {
            ctx->pc = 0x3D6A08u;
            goto label_3d6a08;
        }
    }
    ctx->pc = 0x3D6860u;
    // 0x3d6860: 0x10a30067  beq         $a1, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x3D6860u;
    {
        const bool branch_taken_0x3d6860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d6860) {
            ctx->pc = 0x3D6A00u;
            goto label_3d6a00;
        }
    }
    ctx->pc = 0x3D6868u;
    // 0x3d6868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d6868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d686c: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D686Cu;
    {
        const bool branch_taken_0x3d686c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3d686c) {
            ctx->pc = 0x3D68B0u;
            goto label_3d68b0;
        }
    }
    ctx->pc = 0x3D6874u;
    // 0x3d6874: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6874u;
    {
        const bool branch_taken_0x3d6874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6874) {
            ctx->pc = 0x3D6888u;
            goto label_3d6888;
        }
    }
    ctx->pc = 0x3D687Cu;
    // 0x3d687c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3D687Cu;
    {
        const bool branch_taken_0x3d687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d687c) {
            ctx->pc = 0x3D6A48u;
            goto label_3d6a48;
        }
    }
    ctx->pc = 0x3D6884u;
    // 0x3d6884: 0x0  nop
    ctx->pc = 0x3d6884u;
    // NOP
label_3d6888:
    // 0x3d6888: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d6888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d688c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d688cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6890: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3d6890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3d6894: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3d6894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6898: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d6898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d689c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3d689cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d68a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d68a4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d68a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d68a8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3d68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3d68ac: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3d68acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_3d68b0:
    // 0x3d68b0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3d68b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3d68b4: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x3D68B4u;
    {
        const bool branch_taken_0x3d68b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d68b4) {
            ctx->pc = 0x3D6A48u;
            goto label_3d6a48;
        }
    }
    ctx->pc = 0x3D68BCu;
    // 0x3d68bc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d68bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d68c0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3d68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3d68c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d68c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d68c8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d68cc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3d68ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3d68d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3d68d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d68d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d68d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d68d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d68dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d68dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d68e0: 0x0  nop
    ctx->pc = 0x3d68e0u;
    // NOP
    // 0x3d68e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d68e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d68e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d68e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d68ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D68ECu;
    {
        const bool branch_taken_0x3d68ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d68ec) {
            ctx->pc = 0x3D6904u;
            goto label_3d6904;
        }
    }
    ctx->pc = 0x3D68F4u;
    // 0x3d68f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d68f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d68f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d68f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d68fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D68FCu;
    {
        const bool branch_taken_0x3d68fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D68FCu;
        // 0x3d6900: 0xa6032b28  sh          $v1, 0x2B28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d68fc) {
            ctx->pc = 0x3D6920u;
            goto label_3d6920;
        }
    }
    ctx->pc = 0x3D6904u;
label_3d6904:
    // 0x3d6904: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d6904u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d6908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d6908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d690c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d690cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d6910: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d6910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d6914: 0x0  nop
    ctx->pc = 0x3d6914u;
    // NOP
    // 0x3d6918: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d6918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d691c: 0xa6032b28  sh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d691cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
label_3d6920:
    // 0x3d6920: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3d6920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3d6924: 0x96082b28  lhu         $t0, 0x2B28($s0)
    ctx->pc = 0x3d6924u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d6928: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x3d6928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x3d692c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d692cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6930: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3d6930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3d6934: 0xc052214  jal         func_148850
    ctx->pc = 0x3D6934u;
    SET_GPR_U32(ctx, 31, 0x3D693Cu);
    ctx->pc = 0x3D6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6934u;
    // 0x3d6938: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x3D6934u, 0x3D693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D693Cu;
label_3d693c:
    // 0x3d693c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3d693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d6940: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x3d6940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3d6944: 0x86042b28  lh          $a0, 0x2B28($s0)
    ctx->pc = 0x3d6944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d6948: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3d6948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3d694c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3d694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3d6950: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x3D6950u;
    SET_GPR_U32(ctx, 31, 0x3D6958u);
    ctx->pc = 0x3D6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6950u;
    // 0x3d6954: 0x24470370  addiu       $a3, $v0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x3D6950u, 0x3D6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6958u;
label_3d6958:
    // 0x3d6958: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x3d6958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3d695c: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x3d695cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x3d6960: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d6960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d6964: 0x34454e02  ori         $a1, $v0, 0x4E02
    ctx->pc = 0x3d6964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19970);
    // 0x3d6968: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d6968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d696c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d696cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d6970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d6974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6978: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d6978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d697c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d697cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6980: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3d6980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3d6984: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3d6984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d6988: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3d6988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3d698c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D698Cu;
    SET_GPR_U32(ctx, 31, 0x3D6994u);
    ctx->pc = 0x3D6990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D698Cu;
    // 0x3d6990: 0x24470370  addiu       $a3, $v0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D698Cu, 0x3D6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6994u;
label_3d6994:
    // 0x3d6994: 0xc0f57d0  jal         func_3D5F40
    ctx->pc = 0x3D6994u;
    SET_GPR_U32(ctx, 31, 0x3D699Cu);
    ctx->pc = 0x3D6998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6994u;
    // 0x3d6998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5F40u, 0x3D6994u, 0x3D699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D699Cu;
label_3d699c:
    // 0x3d699c: 0x86072b2a  lh          $a3, 0x2B2A($s0)
    ctx->pc = 0x3d699cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11050)));
    // 0x3d69a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3d69a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d69a4: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x3d69a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d69a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3d69a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d69ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d69acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d69b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3d69b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d69b4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3d69b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d69b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d69bc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3d69bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3d69c0: 0xa6072b2c  sh          $a3, 0x2B2C($s0)
    ctx->pc = 0x3d69c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11052), (uint16_t)GPR_U32(ctx, 7));
    // 0x3d69c4: 0xa6002b2e  sh          $zero, 0x2B2E($s0)
    ctx->pc = 0x3d69c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d69c8: 0x86072b2a  lh          $a3, 0x2B2A($s0)
    ctx->pc = 0x3d69c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11050)));
    // 0x3d69cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d69ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d69d0: 0xa6072b2a  sh          $a3, 0x2B2A($s0)
    ctx->pc = 0x3d69d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11050), (uint16_t)GPR_U32(ctx, 7));
    // 0x3d69d4: 0x86072b2a  lh          $a3, 0x2B2A($s0)
    ctx->pc = 0x3d69d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11050)));
    // 0x3d69d8: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x3d69d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3d69dc: 0xa6072b2a  sh          $a3, 0x2B2A($s0)
    ctx->pc = 0x3d69dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11050), (uint16_t)GPR_U32(ctx, 7));
    // 0x3d69e0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d69e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d69e4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d69e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d69e8: 0xa60607f2  sh          $a2, 0x7F2($s0)
    ctx->pc = 0x3d69e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x3d69ec: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3d69ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d69f0: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3d69f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3d69f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D69F4u;
    {
        const bool branch_taken_0x3d69f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69F4u;
        // 0x3d69f8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d69f4) {
            ctx->pc = 0x3D6A48u;
            goto label_3d6a48;
        }
    }
    ctx->pc = 0x3D69FCu;
    // 0x3d69fc: 0x0  nop
    ctx->pc = 0x3d69fcu;
    // NOP
label_3d6a00:
    // 0x3d6a00: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3d6a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d6a04: 0x0  nop
    ctx->pc = 0x3d6a04u;
    // NOP
label_3d6a08:
    // 0x3d6a08: 0x86052b2c  lh          $a1, 0x2B2C($s0)
    ctx->pc = 0x3d6a08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3d6a0c: 0x86062b2e  lh          $a2, 0x2B2E($s0)
    ctx->pc = 0x3d6a0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3d6a10: 0xc0f57e0  jal         func_3D5F80
    ctx->pc = 0x3D6A10u;
    SET_GPR_U32(ctx, 31, 0x3D6A18u);
    ctx->pc = 0x3D6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A10u;
    // 0x3d6a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5F80u, 0x3D6A10u, 0x3D6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A18u;
label_3d6a18:
    // 0x3d6a18: 0x86032b2e  lh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3d6a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3d6a1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d6a20: 0xa6032b2e  sh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3d6a20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6a24: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d6a28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6A28u;
    {
        const bool branch_taken_0x3d6a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6a28) {
            ctx->pc = 0x3D6A38u;
            goto label_3d6a38;
        }
    }
    ctx->pc = 0x3D6A30u;
    // 0x3d6a30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d6a34: 0xa6032b28  sh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6a34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
label_3d6a38:
    // 0x3d6a38: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6a38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d6a3c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D6A3Cu;
    {
        const bool branch_taken_0x3d6a3c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3D6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A3Cu;
        // 0x3d6a40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a3c) {
            ctx->pc = 0x3D6A48u;
            goto label_3d6a48;
        }
    }
    ctx->pc = 0x3D6A44u;
    // 0x3d6a44: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d6a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3d6a48:
    // 0x3d6a48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d6a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d6a4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d6a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6a50: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A50u;
        // 0x3d6a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6A58u;
}
