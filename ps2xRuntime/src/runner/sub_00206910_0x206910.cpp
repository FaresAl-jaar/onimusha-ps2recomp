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

// Function: sub_00206910
// Address: 0x206910 - 0x206988
void sub_00206910_0x206910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206910_0x206910");
#endif

    switch (ctx->pc) {
        case 0x20693cu: goto label_20693c;
        case 0x206978u: goto label_206978;
        default: break;
    }

    ctx->pc = 0x206910u;

    // 0x206910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206914: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x206914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x206918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20691c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x206920: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x206920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206924: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x206924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206928: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x206928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20692c: 0x8e0601a4  lw          $a2, 0x1A4($s0)
    ctx->pc = 0x20692cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x206930: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x206930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x206934: 0xc08c5b2  jal         func_2316C8
    ctx->pc = 0x206934u;
    SET_GPR_U32(ctx, 31, 0x20693Cu);
    ctx->pc = 0x206938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206934u;
    // 0x206938: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2316C8u, 0x206934u, 0x20693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20693Cu;
label_20693c:
    // 0x20693c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20693cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x206940: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x206940u;
    {
        const bool branch_taken_0x206940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206940u;
        // 0x206944: 0x248474b8  addiu       $a0, $a0, 0x74B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206940) {
            ctx->pc = 0x206970u;
            goto label_206970;
        }
    }
    ctx->pc = 0x206948u;
    // 0x206948: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x206948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20694c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206950: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x206950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x206954: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x206954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206958: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x206958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x20695c: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x20695cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
    // 0x206960: 0xae0401b4  sw          $a0, 0x1B4($s0)
    ctx->pc = 0x206960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 4));
    // 0x206964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x206964u;
    {
        const bool branch_taken_0x206964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206964u;
        // 0x206968: 0xae0501b8  sw          $a1, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206964) {
            ctx->pc = 0x206978u;
            goto label_206978;
        }
    }
    ctx->pc = 0x20696Cu;
    // 0x20696c: 0x0  nop
    ctx->pc = 0x20696cu;
    // NOP
label_206970:
    // 0x206970: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x206970u;
    SET_GPR_U32(ctx, 31, 0x206978u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x206970u, 0x206978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206978u;
label_206978:
    // 0x206978: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x206978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20697c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20697cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206980: 0x3e00008  jr          $ra
    ctx->pc = 0x206980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206980u;
        // 0x206984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206988u;
}
