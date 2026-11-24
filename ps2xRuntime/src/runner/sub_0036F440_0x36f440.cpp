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

// Function: sub_0036F440
// Address: 0x36f440 - 0x36f504
void sub_0036F440_0x36f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F440_0x36f440");
#endif

    switch (ctx->pc) {
        case 0x36f46cu: goto label_36f46c;
        case 0x36f488u: goto label_36f488;
        case 0x36f4a4u: goto label_36f4a4;
        case 0x36f4c4u: goto label_36f4c4;
        case 0x36f4e0u: goto label_36f4e0;
        case 0x36f4ecu: goto label_36f4ec;
        case 0x36f4f4u: goto label_36f4f4;
        default: break;
    }

    ctx->pc = 0x36f440u;

    // 0x36f440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36f444: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x36f444u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x36f448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36f44c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36f450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36f454: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x36f454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x36f458: 0x8089032f  lb          $t1, 0x32F($a0)
    ctx->pc = 0x36f458u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 815)));
    // 0x36f45c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f460: 0x24e7ab70  addiu       $a3, $a3, -0x5490
    ctx->pc = 0x36f460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945648));
    // 0x36f464: 0xc0dc390  jal         func_370E40
    ctx->pc = 0x36F464u;
    SET_GPR_U32(ctx, 31, 0x36F46Cu);
    ctx->pc = 0x36F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F464u;
    // 0x36f468: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370E40u, 0x36F464u, 0x36F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F46Cu;
label_36f46c:
    // 0x36f46c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x36f46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x36f470: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x36f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x36f474: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x36f474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x36f478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36f478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36f47c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f480: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x36F480u;
    SET_GPR_U32(ctx, 31, 0x36F488u);
    ctx->pc = 0x36F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F480u;
    // 0x36f484: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x36F480u, 0x36F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F488u;
label_36f488:
    // 0x36f488: 0x92080336  lbu         $t0, 0x336($s0)
    ctx->pc = 0x36f488u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 822)));
    // 0x36f48c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x36f48cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f494: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x36f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x36f498: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x36f498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x36f49c: 0xc0dc434  jal         func_3710D0
    ctx->pc = 0x36F49Cu;
    SET_GPR_U32(ctx, 31, 0x36F4A4u);
    ctx->pc = 0x36F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F49Cu;
    // 0x36f4a0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3710D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3710D0u, 0x36F49Cu, 0x36F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4A4u;
label_36f4a4:
    // 0x36f4a4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x36f4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x36f4a8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x36f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x36f4ac: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x36f4acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x36f4b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x36f4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x36f4b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36f4b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f4bc: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x36F4BCu;
    SET_GPR_U32(ctx, 31, 0x36F4C4u);
    ctx->pc = 0x36F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4BCu;
    // 0x36f4c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x36F4BCu, 0x36F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4C4u;
label_36f4c4:
    // 0x36f4c4: 0x92080336  lbu         $t0, 0x336($s0)
    ctx->pc = 0x36f4c4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 822)));
    // 0x36f4c8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x36f4c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4d0: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x36f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x36f4d4: 0x240600aa  addiu       $a2, $zero, 0xAA
    ctx->pc = 0x36f4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x36f4d8: 0xc0dc434  jal         func_3710D0
    ctx->pc = 0x36F4D8u;
    SET_GPR_U32(ctx, 31, 0x36F4E0u);
    ctx->pc = 0x36F4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4D8u;
    // 0x36f4dc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3710D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3710D0u, 0x36F4D8u, 0x36F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4E0u;
label_36f4e0:
    // 0x36f4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f4e4: 0xc0dc700  jal         func_371C00
    ctx->pc = 0x36F4E4u;
    SET_GPR_U32(ctx, 31, 0x36F4ECu);
    ctx->pc = 0x36F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4E4u;
    // 0x36f4e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C00u, 0x36F4E4u, 0x36F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4ECu;
label_36f4ec:
    // 0x36f4ec: 0xc0dc6fc  jal         func_371BF0
    ctx->pc = 0x36F4ECu;
    SET_GPR_U32(ctx, 31, 0x36F4F4u);
    ctx->pc = 0x36F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F4ECu;
    // 0x36f4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371BF0u, 0x36F4ECu, 0x36F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4F4u;
label_36f4f4:
    // 0x36f4f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f4f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x36F4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4FCu;
        // 0x36f500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F504u;
}
