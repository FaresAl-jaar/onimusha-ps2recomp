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

// Function: sub_0014B9C0
// Address: 0x14b9c0 - 0x14ba94
void sub_0014B9C0_0x14b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B9C0_0x14b9c0");
#endif

    switch (ctx->pc) {
        case 0x14b9e4u: goto label_14b9e4;
        case 0x14b9ecu: goto label_14b9ec;
        case 0x14b9fcu: goto label_14b9fc;
        case 0x14ba24u: goto label_14ba24;
        case 0x14ba54u: goto label_14ba54;
        case 0x14ba78u: goto label_14ba78;
        default: break;
    }

    ctx->pc = 0x14b9c0u;

    // 0x14b9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b9c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14b9c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14b9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b9d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b9d8: 0x278487c0  addiu       $a0, $gp, -0x7840
    ctx->pc = 0x14b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936512));
    // 0x14b9dc: 0xc069128  jal         func_1A44A0
    ctx->pc = 0x14B9DCu;
    SET_GPR_U32(ctx, 31, 0x14B9E4u);
    ctx->pc = 0x14B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9DCu;
    // 0x14b9e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A44A0u, 0x14B9DCu, 0x14B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9E4u;
label_14b9e4:
    // 0x14b9e4: 0xc0d8c78  jal         func_3631E0
    ctx->pc = 0x14B9E4u;
    SET_GPR_U32(ctx, 31, 0x14B9ECu);
    ctx->pc = 0x3631E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3631E0u, 0x14B9E4u, 0x14B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9ECu;
label_14b9ec:
    // 0x14b9ec: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x14b9ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14b9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9f4: 0xc053730  jal         func_14DCC0
    ctx->pc = 0x14B9F4u;
    SET_GPR_U32(ctx, 31, 0x14B9FCu);
    ctx->pc = 0x14B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9F4u;
    // 0x14b9f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCC0u, 0x14B9F4u, 0x14B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9FCu;
label_14b9fc:
    // 0x14b9fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14B9FCu;
    {
        const bool branch_taken_0x14b9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b9fc) {
            ctx->pc = 0x14BA78u;
            goto label_14ba78;
        }
    }
    ctx->pc = 0x14BA04u;
    // 0x14ba04: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x14ba04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x14ba08: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14ba0c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14ba0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14ba10: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14ba14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ba14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba18: 0x24c6bad0  addiu       $a2, $a2, -0x4530
    ctx->pc = 0x14ba18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949584));
    // 0x14ba1c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14BA1Cu;
    SET_GPR_U32(ctx, 31, 0x14BA24u);
    ctx->pc = 0x14BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA1Cu;
    // 0x14ba20: 0x24e7bab0  addiu       $a3, $a3, -0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14BA1Cu, 0x14BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA24u;
label_14ba24:
    // 0x14ba24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ba24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba28: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x14ba28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x14ba2c: 0x96220858  lhu         $v0, 0x858($s1)
    ctx->pc = 0x14ba2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x14ba30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ba34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14ba38: 0xac520058  sw          $s2, 0x58($v0)
    ctx->pc = 0x14ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 18));
    // 0x14ba3c: 0x96220858  lhu         $v0, 0x858($s1)
    ctx->pc = 0x14ba3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x14ba40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ba44: 0xa6220858  sh          $v0, 0x858($s1)
    ctx->pc = 0x14ba44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2136), (uint16_t)GPR_U32(ctx, 2));
    // 0x14ba48: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x14ba48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x14ba4c: 0xc0d8e7c  jal         func_3639F0
    ctx->pc = 0x14BA4Cu;
    SET_GPR_U32(ctx, 31, 0x14BA54u);
    ctx->pc = 0x14BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA4Cu;
    // 0x14ba50: 0xa7808b7c  sh          $zero, -0x7484($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937468), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3639F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3639F0u, 0x14BA4Cu, 0x14BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA54u;
label_14ba54:
    // 0x14ba54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x14ba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ba58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BA58u;
    {
        const bool branch_taken_0x14ba58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA58u;
        // 0x14ba5c: 0x3c060015  lui         $a2, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba58) {
            ctx->pc = 0x14BA78u;
            goto label_14ba78;
        }
    }
    ctx->pc = 0x14BA60u;
    // 0x14ba60: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14ba60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14ba64: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x14ba64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14ba68: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14ba6c: 0x24c6bad0  addiu       $a2, $a2, -0x4530
    ctx->pc = 0x14ba6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949584));
    // 0x14ba70: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14BA70u;
    SET_GPR_U32(ctx, 31, 0x14BA78u);
    ctx->pc = 0x14BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA70u;
    // 0x14ba74: 0x24e7bab0  addiu       $a3, $a3, -0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14BA70u, 0x14BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA78u;
label_14ba78:
    // 0x14ba78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14ba78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14ba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ba80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ba80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ba84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ba84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ba88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ba8c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA8Cu;
        // 0x14ba90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BA94u;
}
