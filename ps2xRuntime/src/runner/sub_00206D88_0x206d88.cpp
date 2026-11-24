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

// Function: sub_00206D88
// Address: 0x206d88 - 0x206dec
void sub_00206D88_0x206d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206D88_0x206d88");
#endif

    switch (ctx->pc) {
        case 0x206db0u: goto label_206db0;
        case 0x206dd0u: goto label_206dd0;
        default: break;
    }

    ctx->pc = 0x206d88u;

    // 0x206d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206d90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x206d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206d98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d9c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x206d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206da0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x206da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x206da4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x206da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x206da8: 0xc0410a6  jal         func_104298
    ctx->pc = 0x206DA8u;
    SET_GPR_U32(ctx, 31, 0x206DB0u);
    ctx->pc = 0x206DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DA8u;
    // 0x206dac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x206DA8u, 0x206DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DB0u;
label_206db0:
    // 0x206db0: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x206db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x206db4: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x206db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x206db8: 0xac510080  sw          $s1, 0x80($v0)
    ctx->pc = 0x206db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x206dbc: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x206dbcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x206dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x206dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dc8: 0xc0411da  jal         func_104768
    ctx->pc = 0x206DC8u;
    SET_GPR_U32(ctx, 31, 0x206DD0u);
    ctx->pc = 0x206DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DC8u;
    // 0x206dcc: 0x103103  sra         $a2, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104768u, 0x206DC8u, 0x206DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DD0u;
label_206dd0:
    // 0x206dd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206dd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206ddc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206ddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206de0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x206de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206de4: 0x3e00008  jr          $ra
    ctx->pc = 0x206DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DE4u;
        // 0x206de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206DECu;
}
