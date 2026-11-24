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

// Function: sub_003B89C0
// Address: 0x3b89c0 - 0x3b8c70
void sub_003B89C0_0x3b89c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B89C0_0x3b89c0");
#endif

    switch (ctx->pc) {
        case 0x3b8a00u: goto label_3b8a00;
        case 0x3b8ad0u: goto label_3b8ad0;
        case 0x3b8b08u: goto label_3b8b08;
        case 0x3b8b30u: goto label_3b8b30;
        case 0x3b8b38u: goto label_3b8b38;
        case 0x3b8c04u: goto label_3b8c04;
        case 0x3b8c18u: goto label_3b8c18;
        case 0x3b8c60u: goto label_3b8c60;
        default: break;
    }

    ctx->pc = 0x3b89c0u;

    // 0x3b89c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b89c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b89c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b89c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b89c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b89c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b89cc: 0x90832b55  lbu         $v1, 0x2B55($a0)
    ctx->pc = 0x3b89ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11093)));
    // 0x3b89d0: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3b89d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3b89d4: 0x102000a2  beqz        $at, . + 4 + (0xA2 << 2)
    ctx->pc = 0x3B89D4u;
    {
        const bool branch_taken_0x3b89d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B89D4u;
        // 0x3b89d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b89d4) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B89DCu;
    // 0x3b89dc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b89dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3b89e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b89e4: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x3b89e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
    // 0x3b89e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b89ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b89ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b89f0: 0x600008  jr          $v1
    ctx->pc = 0x3B89F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B89F8u: goto label_3b89f8;
            case 0x3B8A28u: goto label_3b8a28;
            case 0x3B8AB0u: goto label_3b8ab0;
            case 0x3B8B08u: goto label_3b8b08;
            case 0x3B8B58u: goto label_3b8b58;
            case 0x3B8BE0u: goto label_3b8be0;
            case 0x3B8C48u: goto label_3b8c48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B89F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B89F8u;
label_3b89f8:
    // 0x3b89f8: 0xc0ef00c  jal         func_3BC030
    ctx->pc = 0x3B89F8u;
    SET_GPR_U32(ctx, 31, 0x3B8A00u);
    ctx->pc = 0x3BC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC030u, 0x3B89F8u, 0x3B8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8A00u;
label_3b8a00:
    // 0x3b8a00: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x3b8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3b8a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8a08: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b8a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8a0c: 0xa2032b59  sb          $v1, 0x2B59($s0)
    ctx->pc = 0x3b8a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8a10: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b8a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8a14: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8a18: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8a1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8a20: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b8a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8a24: 0x0  nop
    ctx->pc = 0x3b8a24u;
    // NOP
label_3b8a28:
    // 0x3b8a28: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b8a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b8a2c: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x3B8A2Cu;
    {
        const bool branch_taken_0x3b8a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8A2Cu;
        // 0x3b8a30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8a2c) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8A34u;
    // 0x3b8a34: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x3b8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x3b8a38: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b8a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8a3c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b8a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b8a40: 0xa2042b59  sb          $a0, 0x2B59($s0)
    ctx->pc = 0x3b8a40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8a44: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b8a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8a48: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b8a4c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8a50: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b8a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b8a54: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b8a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b8a58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b8a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b8a5c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b8a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b8a64: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b8a64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b8a68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b8a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b8a6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8a6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b8a70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8A70u;
    {
        const bool branch_taken_0x3b8a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8a70) {
            ctx->pc = 0x3B8A88u;
            goto label_3b8a88;
        }
    }
    ctx->pc = 0x3B8A78u;
    // 0x3b8a78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b8a7c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b8a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b8a80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8A80u;
    {
        const bool branch_taken_0x3b8a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8A80u;
        // 0x3b8a84: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8a80) {
            ctx->pc = 0x3B8AA4u;
            goto label_3b8aa4;
        }
    }
    ctx->pc = 0x3B8A88u;
label_3b8a88:
    // 0x3b8a88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b8a88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b8a8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b8a90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8a90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b8a94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b8a94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b8a98: 0x0  nop
    ctx->pc = 0x3b8a98u;
    // NOP
    // 0x3b8a9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b8a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b8aa0: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b8aa4:
    // 0x3b8aa4: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8aa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8aac: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b8aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b8ab0:
    // 0x3b8ab0: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b8ab4: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x3B8AB4u;
    {
        const bool branch_taken_0x3b8ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8ab4) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8ABCu;
    // 0x3b8abc: 0x92022b55  lbu         $v0, 0x2B55($s0)
    ctx->pc = 0x3b8abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b8ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b8ac8: 0xc0ee31c  jal         func_3B8C70
    ctx->pc = 0x3B8AC8u;
    SET_GPR_U32(ctx, 31, 0x3B8AD0u);
    ctx->pc = 0x3B8ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8AC8u;
    // 0x3b8acc: 0xa2022b55  sb          $v0, 0x2B55($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8C70u, 0x3B8AC8u, 0x3B8AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8AD0u;
label_3b8ad0:
    // 0x3b8ad0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B8AD0u;
    {
        const bool branch_taken_0x3b8ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8ad0) {
            ctx->pc = 0x3B8B00u;
            goto label_3b8b00;
        }
    }
    ctx->pc = 0x3B8AD8u;
    // 0x3b8ad8: 0x92042b58  lbu         $a0, 0x2B58($s0)
    ctx->pc = 0x3b8ad8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11096)));
    // 0x3b8adc: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x3b8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x3b8ae0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x3b8ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x3b8ae4: 0xa2042b58  sb          $a0, 0x2B58($s0)
    ctx->pc = 0x3b8ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11096), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8ae8: 0xa2002b57  sb          $zero, 0x2B57($s0)
    ctx->pc = 0x3b8ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8aec: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b8aecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8af0: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b8af0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8af4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3B8AF4u;
    {
        const bool branch_taken_0x3b8af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8AF4u;
        // 0x3b8af8: 0xa2002b56  sb          $zero, 0x2B56($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8af4) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8AFCu;
    // 0x3b8afc: 0x0  nop
    ctx->pc = 0x3b8afcu;
    // NOP
label_3b8b00:
    // 0x3b8b00: 0xc0ef26c  jal         func_3BC9B0
    ctx->pc = 0x3B8B00u;
    SET_GPR_U32(ctx, 31, 0x3B8B08u);
    ctx->pc = 0x3B8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8B00u;
    // 0x3b8b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC9B0u, 0x3B8B00u, 0x3B8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8B08u;
label_3b8b08:
    // 0x3b8b08: 0x92032b58  lbu         $v1, 0x2B58($s0)
    ctx->pc = 0x3b8b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11096)));
    // 0x3b8b0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b8b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3b8b10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8B10u;
    {
        const bool branch_taken_0x3b8b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8b10) {
            ctx->pc = 0x3B8B28u;
            goto label_3b8b28;
        }
    }
    ctx->pc = 0x3B8B18u;
    // 0x3b8b18: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3b8b18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b8b1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8b20: 0x1483004f  bne         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x3B8B20u;
    {
        const bool branch_taken_0x3b8b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b8b20) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8B28u;
label_3b8b28:
    // 0x3b8b28: 0xc0ef26c  jal         func_3BC9B0
    ctx->pc = 0x3B8B28u;
    SET_GPR_U32(ctx, 31, 0x3B8B30u);
    ctx->pc = 0x3B8B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8B28u;
    // 0x3b8b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC9B0u, 0x3B8B28u, 0x3B8B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8B30u;
label_3b8b30:
    // 0x3b8b30: 0xc0ee34c  jal         func_3B8D30
    ctx->pc = 0x3B8B30u;
    SET_GPR_U32(ctx, 31, 0x3B8B38u);
    ctx->pc = 0x3B8B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8B30u;
    // 0x3b8b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8D30u, 0x3B8B30u, 0x3B8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8B38u;
label_3b8b38:
    // 0x3b8b38: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x3b8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3b8b3c: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b8b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8b40: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b8b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8b44: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b8b44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8b48: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8b4c: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8b50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8b54: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b8b54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b8b58:
    // 0x3b8b58: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b8b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b8b5c: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3B8B5Cu;
    {
        const bool branch_taken_0x3b8b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8B5Cu;
        // 0x3b8b60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8b5c) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8B64u;
    // 0x3b8b64: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x3b8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x3b8b68: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b8b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8b6c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b8b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b8b70: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b8b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8b74: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b8b74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8b78: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b8b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b8b7c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8b80: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b8b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b8b84: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b8b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b8b88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b8b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b8b8c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b8b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b8b94: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b8b94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b8b98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b8b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b8b9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b8ba0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8BA0u;
    {
        const bool branch_taken_0x3b8ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8ba0) {
            ctx->pc = 0x3B8BB8u;
            goto label_3b8bb8;
        }
    }
    ctx->pc = 0x3B8BA8u;
    // 0x3b8ba8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8ba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b8bac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b8bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b8bb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8BB0u;
    {
        const bool branch_taken_0x3b8bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BB0u;
        // 0x3b8bb4: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bb0) {
            ctx->pc = 0x3B8BD4u;
            goto label_3b8bd4;
        }
    }
    ctx->pc = 0x3B8BB8u;
label_3b8bb8:
    // 0x3b8bb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b8bb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b8bbc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b8bc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b8bc4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b8bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b8bc8: 0x0  nop
    ctx->pc = 0x3b8bc8u;
    // NOP
    // 0x3b8bcc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b8bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b8bd0: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b8bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b8bd4:
    // 0x3b8bd4: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8bdc: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b8bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b8be0:
    // 0x3b8be0: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b8be4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3B8BE4u;
    {
        const bool branch_taken_0x3b8be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8be4) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8BECu;
    // 0x3b8bec: 0x92022b58  lbu         $v0, 0x2B58($s0)
    ctx->pc = 0x3b8becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11096)));
    // 0x3b8bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b8bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b8bf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8BF4u;
    {
        const bool branch_taken_0x3b8bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BF4u;
        // 0x3b8bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bf4) {
            ctx->pc = 0x3B8C10u;
            goto label_3b8c10;
        }
    }
    ctx->pc = 0x3B8BFCu;
    // 0x3b8bfc: 0xc0ee31c  jal         func_3B8C70
    ctx->pc = 0x3B8BFCu;
    SET_GPR_U32(ctx, 31, 0x3B8C04u);
    ctx->pc = 0x3B8C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8C70u, 0x3B8BFCu, 0x3B8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8C04u;
label_3b8c04:
    // 0x3b8c04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8C04u;
    {
        const bool branch_taken_0x3b8c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8c04) {
            ctx->pc = 0x3B8C20u;
            goto label_3b8c20;
        }
    }
    ctx->pc = 0x3B8C0Cu;
    // 0x3b8c0c: 0x0  nop
    ctx->pc = 0x3b8c0cu;
    // NOP
label_3b8c10:
    // 0x3b8c10: 0xc0ee024  jal         func_3B8090
    ctx->pc = 0x3B8C10u;
    SET_GPR_U32(ctx, 31, 0x3B8C18u);
    ctx->pc = 0x3B8C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8C10u;
    // 0x3b8c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8090u, 0x3B8C10u, 0x3B8C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8C18u;
label_3b8c18:
    // 0x3b8c18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B8C18u;
    {
        const bool branch_taken_0x3b8c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8c18) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8C20u;
label_3b8c20:
    // 0x3b8c20: 0xa2002b57  sb          $zero, 0x2B57($s0)
    ctx->pc = 0x3b8c20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8c24: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b8c24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8c28: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x3b8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x3b8c2c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b8c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8c30: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8c34: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8c38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8c3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8C3Cu;
    {
        const bool branch_taken_0x3b8c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C3Cu;
        // 0x3b8c40: 0xa2032b55  sb          $v1, 0x2B55($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c3c) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8C44u;
    // 0x3b8c44: 0x0  nop
    ctx->pc = 0x3b8c44u;
    // NOP
label_3b8c48:
    // 0x3b8c48: 0x9205065c  lbu         $a1, 0x65C($s0)
    ctx->pc = 0x3b8c48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b8c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8c50: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8C50u;
    {
        const bool branch_taken_0x3b8c50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b8c50) {
            ctx->pc = 0x3B8C60u;
            goto label_3b8c60;
        }
    }
    ctx->pc = 0x3B8C58u;
    // 0x3b8c58: 0xc0ee024  jal         func_3B8090
    ctx->pc = 0x3B8C58u;
    SET_GPR_U32(ctx, 31, 0x3B8C60u);
    ctx->pc = 0x3B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8090u, 0x3B8C58u, 0x3B8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8C60u;
label_3b8c60:
    // 0x3b8c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b8c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8c68: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C68u;
        // 0x3b8c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8C70u;
}
