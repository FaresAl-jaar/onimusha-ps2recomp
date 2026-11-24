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

// Function: sub_0021F8F0
// Address: 0x21f8f0 - 0x21f978
void sub_0021F8F0_0x21f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F8F0_0x21f8f0");
#endif

    switch (ctx->pc) {
        case 0x21f928u: goto label_21f928;
        case 0x21f934u: goto label_21f934;
        case 0x21f94cu: goto label_21f94c;
        default: break;
    }

    ctx->pc = 0x21f8f0u;

    // 0x21f8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f8f4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21f8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f8fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21f900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f904: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x21f904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21f908: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f90c: 0x2452a1cc  addiu       $s2, $v0, -0x5E34
    ctx->pc = 0x21f90cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    // 0x21f910: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21f914: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21f914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f918: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21f918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21f91c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21f91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f920: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x21f920u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4BA1CCu));
    // 0x21f924: 0x0  nop
    ctx->pc = 0x21f924u;
    // NOP
label_21f928:
    // 0x21f928: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x21f928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x21f92c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F92Cu;
    SET_GPR_U32(ctx, 31, 0x21F934u);
    ctx->pc = 0x21F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F92Cu;
    // 0x21f930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F92Cu, 0x21F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F934u;
label_21f934:
    // 0x21f934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f938: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21f938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f93c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F93Cu;
    {
        const bool branch_taken_0x21f93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F93Cu;
        // 0x21f940: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f93c) {
            ctx->pc = 0x21F94Cu;
            goto label_21f94c;
        }
    }
    ctx->pc = 0x21F944u;
    // 0x21f944: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x21F944u;
    SET_GPR_U32(ctx, 31, 0x21F94Cu);
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x21F944u, 0x21F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F94Cu;
label_21f94c:
    // 0x21f94c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21f94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x21f950: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21F950u;
    {
        const bool branch_taken_0x21f950 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x21f950) {
            ctx->pc = 0x21F954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F950u;
            // 0x21f954: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f928;
        }
    }
    ctx->pc = 0x21F958u;
    // 0x21f958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f95c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f964: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21f964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f968: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21f968u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f96c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21f96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f970: 0x3e00008  jr          $ra
    ctx->pc = 0x21F970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F970u;
        // 0x21f974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F978u;
}
