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

// Function: sub_0021B9C0
// Address: 0x21b9c0 - 0x21bb08
void sub_0021B9C0_0x21b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B9C0_0x21b9c0");
#endif

    switch (ctx->pc) {
        case 0x21b9fcu: goto label_21b9fc;
        case 0x21ba40u: goto label_21ba40;
        case 0x21ba58u: goto label_21ba58;
        case 0x21ba60u: goto label_21ba60;
        case 0x21baacu: goto label_21baac;
        case 0x21bac0u: goto label_21bac0;
        case 0x21baccu: goto label_21bacc;
        case 0x21bad4u: goto label_21bad4;
        default: break;
    }

    ctx->pc = 0x21b9c0u;

    // 0x21b9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21b9c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21b9c8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x21b9c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b9d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21b9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b9dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21b9e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21b9e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b9e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b9e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21b9ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21b9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21b9f0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x21b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x21b9f4: 0xc086c6a  jal         func_21B1A8
    ctx->pc = 0x21B9F4u;
    SET_GPR_U32(ctx, 31, 0x21B9FCu);
    ctx->pc = 0x21B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B9F4u;
    // 0x21b9f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1A8u, 0x21B9F4u, 0x21B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9FCu;
label_21b9fc:
    // 0x21b9fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ba00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21BA04u;
    {
        const bool branch_taken_0x21ba04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA04u;
        // 0x21ba08: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba04) {
            ctx->pc = 0x21BA38u;
            goto label_21ba38;
        }
    }
    ctx->pc = 0x21BA0Cu;
    // 0x21ba0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ba0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ba10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ba10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ba14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ba14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ba18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21ba18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ba1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21ba1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ba20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21ba20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ba24: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21ba24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ba28: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21ba28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ba2c: 0x807fa9a  j           func_1FEA68
    ctx->pc = 0x21BA2Cu;
    ctx->pc = 0x21BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA2Cu;
    // 0x21ba30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA68u;
    sub_001FEA68_0x1fea68(rdram, ctx, runtime); return;
    ctx->pc = 0x21BA34u;
    // 0x21ba34: 0x0  nop
    ctx->pc = 0x21ba34u;
    // NOP
label_21ba38:
    // 0x21ba38: 0xc07fa9c  jal         func_1FEA70
    ctx->pc = 0x21BA38u;
    SET_GPR_U32(ctx, 31, 0x21BA40u);
    ctx->pc = 0x21BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA38u;
    // 0x21ba3c: 0x8eb21fc0  lw          $s2, 0x1FC0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA70u, 0x21BA38u, 0x21BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA40u;
label_21ba40:
    // 0x21ba40: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x21ba40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba44: 0x26501198  addiu       $s0, $s2, 0x1198
    ctx->pc = 0x21ba44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4504));
    // 0x21ba48: 0x26531128  addiu       $s3, $s2, 0x1128
    ctx->pc = 0x21ba48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4392));
    // 0x21ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ba50: 0xc086b76  jal         func_21ADD8
    ctx->pc = 0x21BA50u;
    SET_GPR_U32(ctx, 31, 0x21BA58u);
    ctx->pc = 0x21BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA50u;
    // 0x21ba54: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ADD8u, 0x21BA50u, 0x21BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA58u;
label_21ba58:
    // 0x21ba58: 0xc086ab6  jal         func_21AAD8
    ctx->pc = 0x21BA58u;
    SET_GPR_U32(ctx, 31, 0x21BA60u);
    ctx->pc = 0x21BA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BA58u;
    // 0x21ba5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AAD8u, 0x21BA58u, 0x21BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BA60u;
label_21ba60:
    // 0x21ba60: 0x26441150  addiu       $a0, $s2, 0x1150
    ctx->pc = 0x21ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4432));
    // 0x21ba64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ba68: 0x8eaa0038  lw          $t2, 0x38($s5)
    ctx->pc = 0x21ba68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x21ba6c: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x21ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x21ba70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x21ba70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ba74: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x21ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21ba78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21ba7c: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x21ba7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x21ba80: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x21ba80u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21ba84: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x21ba84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x21ba88: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x21ba88u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21ba8c: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x21ba8cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x21ba90: 0x107180b  movn        $v1, $t0, $a3
    ctx->pc = 0x21ba90u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x21ba94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x21ba94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x21ba98: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x21ba98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x21ba9c: 0x15490006  bne         $t2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21BA9Cu;
    {
        const bool branch_taken_0x21ba9c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x21BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BA9Cu;
        // 0x21baa0: 0x433018  mult        $a2, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ba9c) {
            ctx->pc = 0x21BAB8u;
            goto label_21bab8;
        }
    }
    ctx->pc = 0x21BAA4u;
    // 0x21baa4: 0xc042e62  jal         func_10B988
    ctx->pc = 0x21BAA4u;
    SET_GPR_U32(ctx, 31, 0x21BAACu);
    ctx->pc = 0x21BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAA4u;
    // 0x21baa8: 0x8e850020  lw          $a1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B988u, 0x21BAA4u, 0x21BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAACu;
label_21baac:
    // 0x21baac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21BAACu;
    {
        const bool branch_taken_0x21baac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BAACu;
        // 0x21bab0: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21baac) {
            ctx->pc = 0x21BAC4u;
            goto label_21bac4;
        }
    }
    ctx->pc = 0x21BAB4u;
    // 0x21bab4: 0x0  nop
    ctx->pc = 0x21bab4u;
    // NOP
label_21bab8:
    // 0x21bab8: 0xc042e74  jal         func_10B9D0
    ctx->pc = 0x21BAB8u;
    SET_GPR_U32(ctx, 31, 0x21BAC0u);
    ctx->pc = 0x21BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAB8u;
    // 0x21babc: 0x8e850020  lw          $a1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B9D0u, 0x21BAB8u, 0x21BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAC0u;
label_21bac0:
    // 0x21bac0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x21bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_21bac4:
    // 0x21bac4: 0xc086b36  jal         func_21ACD8
    ctx->pc = 0x21BAC4u;
    SET_GPR_U32(ctx, 31, 0x21BACCu);
    ctx->pc = 0x21BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BAC4u;
    // 0x21bac8: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ACD8u, 0x21BAC4u, 0x21BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BACCu;
label_21bacc:
    // 0x21bacc: 0xc086f4c  jal         func_21BD30
    ctx->pc = 0x21BACCu;
    SET_GPR_U32(ctx, 31, 0x21BAD4u);
    ctx->pc = 0x21BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BACCu;
    // 0x21bad0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD30u, 0x21BACCu, 0x21BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BAD4u;
label_21bad4:
    // 0x21bad4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x21bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x21bad8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x21bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x21badc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21badcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bae0: 0x2c3100a  movz        $v0, $s6, $v1
    ctx->pc = 0x21bae0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 22));
    // 0x21bae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21bae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21baec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21baecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21baf0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21baf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21baf4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21baf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21baf8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21baf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21bafc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21bafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21bb00: 0x3e00008  jr          $ra
    ctx->pc = 0x21BB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BB00u;
        // 0x21bb04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BB08u;
}
