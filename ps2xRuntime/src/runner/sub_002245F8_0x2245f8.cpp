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

// Function: sub_002245F8
// Address: 0x2245f8 - 0x224668
void sub_002245F8_0x2245f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002245F8_0x2245f8");
#endif

    switch (ctx->pc) {
        case 0x224624u: goto label_224624;
        case 0x224638u: goto label_224638;
        default: break;
    }

    ctx->pc = 0x2245f8u;

    // 0x2245f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2245f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2245fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2245fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224600: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224604: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22460c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x22460cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224610: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x224610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x224614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224618: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22461c: 0xc089168  jal         func_2245A0
    ctx->pc = 0x22461Cu;
    SET_GPR_U32(ctx, 31, 0x224624u);
    ctx->pc = 0x224620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22461Cu;
    // 0x224620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x22461Cu, 0x224624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224624u;
label_224624:
    // 0x224624: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224628: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x224628u;
    {
        const bool branch_taken_0x224628 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224628u;
        // 0x22462c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224628) {
            ctx->pc = 0x224650u;
            goto label_224650;
        }
    }
    ctx->pc = 0x224630u;
    // 0x224630: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x224630u;
    SET_GPR_U32(ctx, 31, 0x224638u);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x224630u, 0x224638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224638u;
label_224638:
    // 0x224638: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x224638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x22463c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22463Cu;
    {
        const bool branch_taken_0x22463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x224640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22463Cu;
        // 0x224640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22463c) {
            ctx->pc = 0x224650u;
            goto label_224650;
        }
    }
    ctx->pc = 0x224644u;
    // 0x224644: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x224644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x224648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22464c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22464cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224650:
    // 0x224650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224658: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22465c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22465cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224660: 0x3e00008  jr          $ra
    ctx->pc = 0x224660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224660u;
        // 0x224664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224668u;
}
