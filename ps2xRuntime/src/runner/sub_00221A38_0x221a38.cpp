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

// Function: sub_00221A38
// Address: 0x221a38 - 0x221ad0
void sub_00221A38_0x221a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221A38_0x221a38");
#endif

    switch (ctx->pc) {
        case 0x221a7cu: goto label_221a7c;
        case 0x221ab8u: goto label_221ab8;
        default: break;
    }

    ctx->pc = 0x221a38u;

    // 0x221a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221a3c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x221a3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x221a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x221a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221a48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x221a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x221a4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x221a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x221a50: 0x8c650950  lw          $a1, 0x950($v1)
    ctx->pc = 0x221a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2384)));
    // 0x221a54: 0x24630d30  addiu       $v1, $v1, 0xD30
    ctx->pc = 0x221a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x221a58: 0x8c700280  lw          $s0, 0x280($v1)
    ctx->pc = 0x221a58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x221a5c: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x221A5Cu;
    {
        const bool branch_taken_0x221a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A5Cu;
        // 0x221a60: 0x8c71027c  lw          $s1, 0x27C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a5c) {
            ctx->pc = 0x221ABCu;
            goto label_221abc;
        }
    }
    ctx->pc = 0x221A64u;
    // 0x221a64: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x221a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x221a68: 0x12230014  beq         $s1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x221A68u;
    {
        const bool branch_taken_0x221a68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x221A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A68u;
        // 0x221a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a68) {
            ctx->pc = 0x221ABCu;
            goto label_221abc;
        }
    }
    ctx->pc = 0x221A70u;
    // 0x221a70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x221a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a74: 0xc088228  jal         func_2208A0
    ctx->pc = 0x221A74u;
    SET_GPR_U32(ctx, 31, 0x221A7Cu);
    ctx->pc = 0x221A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A74u;
    // 0x221a78: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208A0u, 0x221A74u, 0x221A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A7Cu;
label_221a7c:
    // 0x221a7c: 0x3403ea24  ori         $v1, $zero, 0xEA24
    ctx->pc = 0x221a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x221a80: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x221a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x221a84: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x221A84u;
    {
        const bool branch_taken_0x221a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a84) {
            ctx->pc = 0x221A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221A84u;
            // 0x221a88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x221A8Cu;
            goto label_221a8c;
        }
    }
    ctx->pc = 0x221A8Cu;
label_221a8c:
    // 0x221a8c: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x221a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x221a90: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x221a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221a94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x221a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x221a98: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x221a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x221a9c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x221a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x221aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221aa4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x221aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x221aa8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x221aa8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x221aac: 0x2012  mflo        $a0
    ctx->pc = 0x221aacu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x221ab0: 0xc07d36e  jal         func_1F4DB8
    ctx->pc = 0x221AB0u;
    SET_GPR_U32(ctx, 31, 0x221AB8u);
    ctx->pc = 0x221AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AB0u;
    // 0x221ab4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DB8u, 0x221AB0u, 0x221AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AB8u;
label_221ab8:
    // 0x221ab8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x221ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_221abc:
    // 0x221abc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x221abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221ac0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x221ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x221ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x221AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AC8u;
        // 0x221acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221AD0u;
}
