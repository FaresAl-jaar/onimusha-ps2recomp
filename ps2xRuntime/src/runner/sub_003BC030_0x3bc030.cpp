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

// Function: sub_003BC030
// Address: 0x3bc030 - 0x3bc480
void sub_003BC030_0x3bc030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BC030_0x3bc030");
#endif

    switch (ctx->pc) {
        case 0x3bc088u: goto label_3bc088;
        case 0x3bc0f4u: goto label_3bc0f4;
        case 0x3bc144u: goto label_3bc144;
        case 0x3bc16cu: goto label_3bc16c;
        case 0x3bc1c0u: goto label_3bc1c0;
        case 0x3bc1e0u: goto label_3bc1e0;
        case 0x3bc214u: goto label_3bc214;
        case 0x3bc228u: goto label_3bc228;
        case 0x3bc358u: goto label_3bc358;
        case 0x3bc36cu: goto label_3bc36c;
        case 0x3bc380u: goto label_3bc380;
        case 0x3bc390u: goto label_3bc390;
        case 0x3bc424u: goto label_3bc424;
        default: break;
    }

    ctx->pc = 0x3bc030u;

    // 0x3bc030: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x3bc030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x3bc034: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bc034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bc038: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3bc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3bc03c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bc03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bc040: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3bc040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3bc044: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3bc044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3bc048: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3bc048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3bc04c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3bc04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3bc050: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3bc050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3bc054: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3bc054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3bc058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bc058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bc05c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bc05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bc060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bc060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bc064: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bc064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bc068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bc068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bc06c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bc06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bc070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3bc070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bc074: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3BC074u;
    {
        const bool branch_taken_0x3bc074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC074u;
        // 0x3bc078: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc074) {
            ctx->pc = 0x3BC0D0u;
            goto label_3bc0d0;
        }
    }
    ctx->pc = 0x3BC07Cu;
    // 0x3bc07c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3bc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3bc080: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3BC080u;
    SET_GPR_U32(ctx, 31, 0x3BC088u);
    ctx->pc = 0x3BC084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC080u;
    // 0x3bc084: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3BC080u, 0x3BC088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC088u;
label_3bc088:
    // 0x3bc088: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bc088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bc08c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3bc08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3bc090: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bc090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bc094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3bc094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3bc098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bc098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc09c: 0x0  nop
    ctx->pc = 0x3bc09cu;
    // NOP
    // 0x3bc0a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bc0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bc0a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bc0a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bc0a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc0a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bc0ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bc0acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bc0b0: 0x0  nop
    ctx->pc = 0x3bc0b0u;
    // NOP
    // 0x3bc0b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bc0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bc0b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bc0b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bc0bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3bc0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3bc0c0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3bc0c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bc0c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC0C4u;
    {
        const bool branch_taken_0x3bc0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC0C4u;
        // 0x3bc0c8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc0c4) {
            ctx->pc = 0x3BC0D8u;
            goto label_3bc0d8;
        }
    }
    ctx->pc = 0x3BC0CCu;
    // 0x3bc0cc: 0x0  nop
    ctx->pc = 0x3bc0ccu;
    // NOP
label_3bc0d0:
    // 0x3bc0d0: 0x869000c2  lh          $s0, 0xC2($s4)
    ctx->pc = 0x3bc0d0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3bc0d4: 0x0  nop
    ctx->pc = 0x3bc0d4u;
    // NOP
label_3bc0d8:
    // 0x3bc0d8: 0x92822b49  lbu         $v0, 0x2B49($s4)
    ctx->pc = 0x3bc0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11081)));
    // 0x3bc0dc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3bc0dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3bc0e0: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x3BC0E0u;
    {
        const bool branch_taken_0x3bc0e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC0E0u;
        // 0x3bc0e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc0e0) {
            ctx->pc = 0x3BC138u;
            goto label_3bc138;
        }
    }
    ctx->pc = 0x3BC0E8u;
    // 0x3bc0e8: 0x26842b30  addiu       $a0, $s4, 0x2B30
    ctx->pc = 0x3bc0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11056));
    // 0x3bc0ec: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3BC0ECu;
    SET_GPR_U32(ctx, 31, 0x3BC0F4u);
    ctx->pc = 0x3BC0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC0ECu;
    // 0x3bc0f0: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3BC0ECu, 0x3BC0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC0F4u;
label_3bc0f4:
    // 0x3bc0f4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bc0f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3bc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3bc0fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3bc0fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bc100: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3bc100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3bc104: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bc104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc108: 0x0  nop
    ctx->pc = 0x3bc108u;
    // NOP
    // 0x3bc10c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bc10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bc110: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3bc110u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3bc114: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bc118: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bc118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bc11c: 0x0  nop
    ctx->pc = 0x3bc11cu;
    // NOP
    // 0x3bc120: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bc120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bc124: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bc124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bc128: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3bc128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3bc12c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3bc12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bc130: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3bc130u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3bc134: 0x0  nop
    ctx->pc = 0x3bc134u;
    // NOP
label_3bc138:
    // 0x3bc138: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x3bc138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3bc13c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC13Cu;
    {
        const bool branch_taken_0x3bc13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC13Cu;
        // 0x3bc140: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc13c) {
            ctx->pc = 0x3BC160u;
            goto label_3bc160;
        }
    }
    ctx->pc = 0x3BC144u;
label_3bc144:
    // 0x3bc144: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3bc144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bc148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bc148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bc14c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bc14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bc150: 0x0  nop
    ctx->pc = 0x3bc150u;
    // NOP
    // 0x3bc154: 0x0  nop
    ctx->pc = 0x3bc154u;
    // NOP
    // 0x3bc158: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BC158u;
    {
        const bool branch_taken_0x3bc158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc158) {
            ctx->pc = 0x3BC144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc144;
        }
    }
    ctx->pc = 0x3BC160u;
label_3bc160:
    // 0x3bc160: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x3bc160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x3bc164: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC164u;
    {
        const bool branch_taken_0x3bc164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC164u;
        // 0x3bc168: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc164) {
            ctx->pc = 0x3BC188u;
            goto label_3bc188;
        }
    }
    ctx->pc = 0x3BC16Cu;
label_3bc16c:
    // 0x3bc16c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3bc16cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bc170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bc170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bc174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bc178: 0x0  nop
    ctx->pc = 0x3bc178u;
    // NOP
    // 0x3bc17c: 0x0  nop
    ctx->pc = 0x3bc17cu;
    // NOP
    // 0x3bc180: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BC180u;
    {
        const bool branch_taken_0x3bc180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bc180) {
            ctx->pc = 0x3BC16Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc16c;
        }
    }
    ctx->pc = 0x3BC188u;
label_3bc188:
    // 0x3bc188: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3bc188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3bc18c: 0x4b43c  dsll32      $s6, $a0, 16
    ctx->pc = 0x3bc18cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3bc190: 0x2442e0f0  addiu       $v0, $v0, -0x1F10
    ctx->pc = 0x3bc190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959344));
    // 0x3bc194: 0x10bc3c  dsll32      $s7, $s0, 16
    ctx->pc = 0x3bc194u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bc198: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3bc198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bc19c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x3bc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3bc1a0: 0x27be01c0  addiu       $fp, $sp, 0x1C0
    ctx->pc = 0x3bc1a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3bc1a4: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x3bc1a4u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x3bc1a8: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x3bc1a8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x3bc1ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3bc1acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc1b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3bc1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc1b4: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x3bc1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3bc1b8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x3bc1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc1bc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3bc1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3bc1c0:
    // 0x3bc1c0: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x3bc1c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x3bc1c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3bc1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3bc1c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3bc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3bc1cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3bc1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3bc1d0: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x3bc1d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bc1d4: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x3bc1d4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x3bc1d8: 0xc04d594  jal         func_135650
    ctx->pc = 0x3BC1D8u;
    SET_GPR_U32(ctx, 31, 0x3BC1E0u);
    ctx->pc = 0x3BC1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC1D8u;
    // 0x3bc1dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x3BC1D8u, 0x3BC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC1E0u;
label_3bc1e0:
    // 0x3bc1e0: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x3bc1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bc1e4: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x3bc1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3bc1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bc1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc1ec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3bc1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3bc1f0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x3bc1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3bc1f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3bc1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3bc1f8: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3bc1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bc1fc: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x3bc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x3bc200: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3bc200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3bc204: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x3bc204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bc208: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x3bc208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x3bc20c: 0xc041442  jal         func_105108
    ctx->pc = 0x3BC20Cu;
    SET_GPR_U32(ctx, 31, 0x3BC214u);
    ctx->pc = 0x3BC210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC20Cu;
    // 0x3bc210: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3BC20Cu, 0x3BC214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC214u;
label_3bc214:
    // 0x3bc214: 0x8e842b50  lw          $a0, 0x2B50($s4)
    ctx->pc = 0x3bc214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11088)));
    // 0x3bc218: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3bc218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3bc21c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bc21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bc220: 0xc0edda8  jal         func_3B76A0
    ctx->pc = 0x3BC220u;
    SET_GPR_U32(ctx, 31, 0x3BC228u);
    ctx->pc = 0x3BC224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC220u;
    // 0x3bc224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B76A0u, 0x3BC220u, 0x3BC228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC228u;
label_3bc228:
    // 0x3bc228: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3BC228u;
    {
        const bool branch_taken_0x3bc228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC228u;
        // 0x3bc22c: 0x15243c  dsll32      $a0, $s5, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc228) {
            ctx->pc = 0x3BC318u;
            goto label_3bc318;
        }
    }
    ctx->pc = 0x3BC230u;
    // 0x3bc230: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3bc230u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3bc234: 0x2c41823  subu        $v1, $s6, $a0
    ctx->pc = 0x3bc234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x3bc238: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3bc238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3bc23c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x3bc23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3bc240: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3bc240u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3bc244: 0x28a10801  slti        $at, $a1, 0x801
    ctx->pc = 0x3bc244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3bc248: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC248u;
    {
        const bool branch_taken_0x3bc248 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC248u;
        // 0x3bc24c: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc248) {
            ctx->pc = 0x3BC25Cu;
            goto label_3bc25c;
        }
    }
    ctx->pc = 0x3BC250u;
    // 0x3bc250: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3bc250u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3bc254: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x3bc254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3bc258: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3bc258u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_3bc25c:
    // 0x3bc25c: 0x92832b49  lbu         $v1, 0x2B49($s4)
    ctx->pc = 0x3bc25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11081)));
    // 0x3bc260: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x3bc260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3bc264: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3bc264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3bc268: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BC268u;
    {
        const bool branch_taken_0x3bc268 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC268u;
        // 0x3bc26c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc268) {
            ctx->pc = 0x3BC290u;
            goto label_3bc290;
        }
    }
    ctx->pc = 0x3BC270u;
    // 0x3bc270: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3bc270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3bc274: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3bc274u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3bc278: 0x28610200  slti        $at, $v1, 0x200
    ctx->pc = 0x3bc278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3bc27c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC27Cu;
    {
        const bool branch_taken_0x3bc27c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC27Cu;
        // 0x3bc280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc27c) {
            ctx->pc = 0x3BC290u;
            goto label_3bc290;
        }
    }
    ctx->pc = 0x3BC284u;
    // 0x3bc284: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3BC284u;
    {
        const bool branch_taken_0x3bc284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC284u;
        // 0x3bc288: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc284) {
            ctx->pc = 0x3BC320u;
            goto label_3bc320;
        }
    }
    ctx->pc = 0x3BC28Cu;
    // 0x3bc28c: 0x0  nop
    ctx->pc = 0x3bc28cu;
    // NOP
label_3bc290:
    // 0x3bc290: 0x2e41823  subu        $v1, $s7, $a0
    ctx->pc = 0x3bc290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x3bc294: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3bc294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3bc298: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3bc298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3bc29c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3bc29cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3bc2a0: 0x28810801  slti        $at, $a0, 0x801
    ctx->pc = 0x3bc2a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3bc2a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC2A4u;
    {
        const bool branch_taken_0x3bc2a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2A4u;
        // 0x3bc2a8: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc2a4) {
            ctx->pc = 0x3BC2B8u;
            goto label_3bc2b8;
        }
    }
    ctx->pc = 0x3BC2ACu;
    // 0x3bc2ac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3bc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bc2b0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3bc2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3bc2b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3bc2b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_3bc2b8:
    // 0x3bc2b8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x3bc2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3bc2bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3bc2bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3bc2c0: 0x286100aa  slti        $at, $v1, 0xAA
    ctx->pc = 0x3bc2c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)170) ? 1 : 0);
    // 0x3bc2c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC2C4u;
    {
        const bool branch_taken_0x3bc2c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc2c4) {
            ctx->pc = 0x3BC2D8u;
            goto label_3bc2d8;
        }
    }
    ctx->pc = 0x3BC2CCu;
    // 0x3bc2cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bc2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bc2d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3BC2D0u;
    {
        const bool branch_taken_0x3bc2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2D0u;
        // 0x3bc2d4: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc2d0) {
            ctx->pc = 0x3BC320u;
            goto label_3bc320;
        }
    }
    ctx->pc = 0x3BC2D8u;
label_3bc2d8:
    // 0x3bc2d8: 0x28610200  slti        $at, $v1, 0x200
    ctx->pc = 0x3bc2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3bc2dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC2DCu;
    {
        const bool branch_taken_0x3bc2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc2dc) {
            ctx->pc = 0x3BC2F0u;
            goto label_3bc2f0;
        }
    }
    ctx->pc = 0x3BC2E4u;
    // 0x3bc2e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3bc2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bc2e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3BC2E8u;
    {
        const bool branch_taken_0x3bc2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC2E8u;
        // 0x3bc2ec: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc2e8) {
            ctx->pc = 0x3BC320u;
            goto label_3bc320;
        }
    }
    ctx->pc = 0x3BC2F0u;
label_3bc2f0:
    // 0x3bc2f0: 0x28610600  slti        $at, $v1, 0x600
    ctx->pc = 0x3bc2f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x3bc2f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC2F4u;
    {
        const bool branch_taken_0x3bc2f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc2f4) {
            ctx->pc = 0x3BC308u;
            goto label_3bc308;
        }
    }
    ctx->pc = 0x3BC2FCu;
    // 0x3bc2fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3bc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bc300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BC300u;
    {
        const bool branch_taken_0x3bc300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC300u;
        // 0x3bc304: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc300) {
            ctx->pc = 0x3BC320u;
            goto label_3bc320;
        }
    }
    ctx->pc = 0x3BC308u;
label_3bc308:
    // 0x3bc308: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3bc308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3bc30c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC30Cu;
    {
        const bool branch_taken_0x3bc30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC30Cu;
        // 0x3bc310: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc30c) {
            ctx->pc = 0x3BC320u;
            goto label_3bc320;
        }
    }
    ctx->pc = 0x3BC314u;
    // 0x3bc314: 0x0  nop
    ctx->pc = 0x3bc314u;
    // NOP
label_3bc318:
    // 0x3bc318: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3bc318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bc31c: 0x0  nop
    ctx->pc = 0x3bc31cu;
    // NOP
label_3bc320:
    // 0x3bc320: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3bc320u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bc324: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3bc324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3bc328: 0x26520155  addiu       $s2, $s2, 0x155
    ctx->pc = 0x3bc328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 341));
    // 0x3bc32c: 0x2e63000c  sltiu       $v1, $s3, 0xC
    ctx->pc = 0x3bc32cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3bc330: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3bc330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3bc334: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x3bc334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3bc338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bc338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3bc33c: 0x90a401b8  lbu         $a0, 0x1B8($a1)
    ctx->pc = 0x3bc33cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 440)));
    // 0x3bc340: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3bc340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3bc344: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x3BC344u;
    {
        const bool branch_taken_0x3bc344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC344u;
        // 0x3bc348: 0xa0a401b8  sb          $a0, 0x1B8($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 440), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc344) {
            ctx->pc = 0x3BC1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc1c0;
        }
    }
    ctx->pc = 0x3BC34Cu;
    // 0x3bc34c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x3bc34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bc350: 0x27b001bc  addiu       $s0, $sp, 0x1BC
    ctx->pc = 0x3bc350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x3bc354: 0x0  nop
    ctx->pc = 0x3bc354u;
    // NOP
label_3bc358:
    // 0x3bc358: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3bc358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bc35c: 0x18600038  blez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3BC35Cu;
    {
        const bool branch_taken_0x3bc35c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3bc35c) {
            ctx->pc = 0x3BC440u;
            goto label_3bc440;
        }
    }
    ctx->pc = 0x3BC364u;
    // 0x3bc364: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3BC364u;
    SET_GPR_U32(ctx, 31, 0x3BC36Cu);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3BC364u, 0x3BC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC36Cu;
label_3bc36c:
    // 0x3bc36c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3bc36cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bc370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bc370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc374: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3bc374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3bc378: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3BC378u;
    SET_GPR_U32(ctx, 31, 0x3BC380u);
    ctx->pc = 0x3BC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC378u;
    // 0x3bc37c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3BC378u, 0x3BC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC380u;
label_3bc380:
    // 0x3bc380: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3bc380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bc384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bc384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc388: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3bc388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc38c: 0x0  nop
    ctx->pc = 0x3bc38cu;
    // NOP
label_3bc390:
    // 0x3bc390: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3bc390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bc394: 0x14710026  bne         $v1, $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3BC394u;
    {
        const bool branch_taken_0x3bc394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x3BC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC394u;
        // 0x3bc398: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc394) {
            ctx->pc = 0x3BC430u;
            goto label_3bc430;
        }
    }
    ctx->pc = 0x3BC39Cu;
    // 0x3bc39c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BC39Cu;
    {
        const bool branch_taken_0x3bc39c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3bc39c) {
            ctx->pc = 0x3BC3B0u;
            goto label_3bc3b0;
        }
    }
    ctx->pc = 0x3BC3A4u;
    // 0x3bc3a4: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x3bc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3bc3a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3BC3A8u;
    {
        const bool branch_taken_0x3bc3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC3A8u;
        // 0x3bc3ac: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc3a8) {
            ctx->pc = 0x3BC430u;
            goto label_3bc430;
        }
    }
    ctx->pc = 0x3BC3B0u;
label_3bc3b0:
    // 0x3bc3b0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3bc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3bc3b4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bc3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bc3b8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3bc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3bc3bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bc3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bc3c0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3bc3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3bc3c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bc3c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bc3c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3bc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3bc3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bc3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bc3d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bc3d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bc3d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bc3d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bc3d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bc3d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bc3dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BC3DCu;
    {
        const bool branch_taken_0x3bc3dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bc3dc) {
            ctx->pc = 0x3BC3F4u;
            goto label_3bc3f4;
        }
    }
    ctx->pc = 0x3BC3E4u;
    // 0x3bc3e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc3e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc3e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3bc3e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3bc3ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BC3ECu;
    {
        const bool branch_taken_0x3bc3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC3ECu;
        // 0x3bc3f0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc3ec) {
            ctx->pc = 0x3BC410u;
            goto label_3bc410;
        }
    }
    ctx->pc = 0x3BC3F4u;
label_3bc3f4:
    // 0x3bc3f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bc3f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bc3f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bc3fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bc3fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bc400: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3bc400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3bc404: 0x0  nop
    ctx->pc = 0x3bc404u;
    // NOP
    // 0x3bc408: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3bc408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bc40c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3bc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3bc410:
    // 0x3bc410: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x3bc410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3bc414: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3bc414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bc418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3bc418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bc41c: 0xc0ef120  jal         func_3BC480
    ctx->pc = 0x3BC41Cu;
    SET_GPR_U32(ctx, 31, 0x3BC424u);
    ctx->pc = 0x3BC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BC41Cu;
    // 0x3bc420: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC480u, 0x3BC41Cu, 0x3BC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BC424u;
label_3bc424:
    // 0x3bc424: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BC424u;
    {
        const bool branch_taken_0x3bc424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bc424) {
            ctx->pc = 0x3BC450u;
            goto label_3bc450;
        }
    }
    ctx->pc = 0x3BC42Cu;
    // 0x3bc42c: 0x0  nop
    ctx->pc = 0x3bc42cu;
    // NOP
label_3bc430:
    // 0x3bc430: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bc430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bc434: 0x2ca3000c  sltiu       $v1, $a1, 0xC
    ctx->pc = 0x3bc434u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3bc438: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3BC438u;
    {
        const bool branch_taken_0x3bc438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC438u;
        // 0x3bc43c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc438) {
            ctx->pc = 0x3BC390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc390;
        }
    }
    ctx->pc = 0x3BC440u;
label_3bc440:
    // 0x3bc440: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3bc440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3bc444: 0x1620ffc4  bnez        $s1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3BC444u;
    {
        const bool branch_taken_0x3bc444 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC444u;
        // 0x3bc448: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bc444) {
            ctx->pc = 0x3BC358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bc358;
        }
    }
    ctx->pc = 0x3BC44Cu;
    // 0x3bc44c: 0x0  nop
    ctx->pc = 0x3bc44cu;
    // NOP
label_3bc450:
    // 0x3bc450: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3bc450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3bc454: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3bc454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3bc458: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3bc458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bc45c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3bc45cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bc460: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3bc460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bc464: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3bc464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bc468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bc468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bc46c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bc46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bc470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bc470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bc474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bc474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bc478: 0x3e00008  jr          $ra
    ctx->pc = 0x3BC478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BC478u;
        // 0x3bc47c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BC478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BC480u;
}
