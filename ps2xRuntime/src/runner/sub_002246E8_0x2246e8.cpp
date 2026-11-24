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

// Function: sub_002246E8
// Address: 0x2246e8 - 0x224754
void sub_002246E8_0x2246e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002246E8_0x2246e8");
#endif

    switch (ctx->pc) {
        case 0x224710u: goto label_224710;
        case 0x224724u: goto label_224724;
        default: break;
    }

    ctx->pc = 0x2246e8u;

    // 0x2246e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2246e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2246ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2246ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2246f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2246f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2246f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2246f8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2246f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2246fc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2246fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224704: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224708: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224708u;
    SET_GPR_U32(ctx, 31, 0x224710u);
    ctx->pc = 0x22470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224708u;
    // 0x22470c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224708u, 0x224710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224710u;
label_224710:
    // 0x224710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224714: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x224714u;
    {
        const bool branch_taken_0x224714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224714u;
        // 0x224718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224714) {
            ctx->pc = 0x22473Cu;
            goto label_22473c;
        }
    }
    ctx->pc = 0x22471Cu;
    // 0x22471c: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x22471Cu;
    SET_GPR_U32(ctx, 31, 0x224724u);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x22471Cu, 0x224724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224724u;
label_224724:
    // 0x224724: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x224724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x224728: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224728u;
    {
        const bool branch_taken_0x224728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224728u;
        // 0x22472c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224728) {
            ctx->pc = 0x22473Cu;
            goto label_22473c;
        }
    }
    ctx->pc = 0x224730u;
    // 0x224730: 0x9223001b  lbu         $v1, 0x1B($s1)
    ctx->pc = 0x224730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x224734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224738: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_22473c:
    // 0x22473c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22473cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224748: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22474c: 0x3e00008  jr          $ra
    ctx->pc = 0x22474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22474Cu;
        // 0x224750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224754u;
}
