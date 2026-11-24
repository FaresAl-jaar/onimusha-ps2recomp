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

// Function: sub_0024C140
// Address: 0x24c140 - 0x24c1fc
void sub_0024C140_0x24c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C140_0x24c140");
#endif

    switch (ctx->pc) {
        case 0x24c180u: goto label_24c180;
        case 0x24c194u: goto label_24c194;
        case 0x24c1b0u: goto label_24c1b0;
        case 0x24c1b8u: goto label_24c1b8;
        default: break;
    }

    ctx->pc = 0x24c140u;

    // 0x24c140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24c144: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24c144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24c148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c14c: 0x24631378  addiu       $v1, $v1, 0x1378
    ctx->pc = 0x24c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4984));
    // 0x24c150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c158: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24c15c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24c15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24c160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24c160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D1378u));
    // 0x24c164: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24c168: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x24C168u;
    {
        const bool branch_taken_0x24c168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C168u;
        // 0x24c16c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c168) {
            ctx->pc = 0x24C1E0u;
            goto label_24c1e0;
        }
    }
    ctx->pc = 0x24C170u;
    // 0x24c170: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x24c170u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
    // 0x24c174: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24c174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c178: 0x26701380  addiu       $s0, $s3, 0x1380
    ctx->pc = 0x24c178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4992));
    // 0x24c17c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x24c17cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_24c180:
    // 0x24c180: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x24c180u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c184: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C184u;
    {
        const bool branch_taken_0x24c184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x24c184) {
            ctx->pc = 0x24C188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C184u;
            // 0x24c188: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C198u;
            goto label_24c198;
        }
    }
    ctx->pc = 0x24C18Cu;
    // 0x24c18c: 0xc092cda  jal         func_24B368
    ctx->pc = 0x24C18Cu;
    SET_GPR_U32(ctx, 31, 0x24C194u);
    ctx->pc = 0x24C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C18Cu;
    // 0x24c190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B368u, 0x24C18Cu, 0x24C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C194u;
label_24c194:
    // 0x24c194: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24c194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_24c198:
    // 0x24c198: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24C198u;
    {
        const bool branch_taken_0x24c198 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x24C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C198u;
        // 0x24c19c: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c198) {
            ctx->pc = 0x24C180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c180;
        }
    }
    ctx->pc = 0x24C1A0u;
    // 0x24c1a0: 0x26641380  addiu       $a0, $s3, 0x1380
    ctx->pc = 0x24c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4992));
    // 0x24c1a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1a8: 0xc049590  jal         func_125640
    ctx->pc = 0x24C1A8u;
    SET_GPR_U32(ctx, 31, 0x24C1B0u);
    ctx->pc = 0x24C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1A8u;
    // 0x24c1ac: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24C1A8u, 0x24C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1B0u;
label_24c1b0:
    // 0x24c1b0: 0xc09302e  jal         func_24C0B8
    ctx->pc = 0x24C1B0u;
    SET_GPR_U32(ctx, 31, 0x24C1B8u);
    ctx->pc = 0x24C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C0B8u, 0x24C1B0u, 0x24C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1B8u;
label_24c1b8:
    // 0x24c1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c1bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24c1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c1c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c1c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c1cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24c1ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c1d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24c1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c1d4: 0x8092ffe  j           func_24BFF8
    ctx->pc = 0x24C1D4u;
    ctx->pc = 0x24C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C1D4u;
    // 0x24c1d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    sub_0024BFF8_0x24bff8(rdram, ctx, runtime); return;
    ctx->pc = 0x24C1DCu;
    // 0x24c1dc: 0x0  nop
    ctx->pc = 0x24c1dcu;
    // NOP
label_24c1e0:
    // 0x24c1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c1e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c1e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c1e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c1ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24c1ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c1f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24c1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1F4u;
        // 0x24c1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C1FCu;
}
