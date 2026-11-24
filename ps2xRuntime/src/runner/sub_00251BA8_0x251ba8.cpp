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

// Function: sub_00251BA8
// Address: 0x251ba8 - 0x251bf4
void sub_00251BA8_0x251ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251BA8_0x251ba8");
#endif

    switch (ctx->pc) {
        case 0x251bccu: goto label_251bcc;
        case 0x251bdcu: goto label_251bdc;
        default: break;
    }

    ctx->pc = 0x251ba8u;

    // 0x251ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x251bb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251bbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x251bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x251bc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x251bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x251bc4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x251BC4u;
    SET_GPR_U32(ctx, 31, 0x251BCCu);
    ctx->pc = 0x251BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251BC4u;
    // 0x251bc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x251BC4u, 0x251BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251BCCu;
label_251bcc:
    // 0x251bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251bd4: 0xc0946fe  jal         func_251BF8
    ctx->pc = 0x251BD4u;
    SET_GPR_U32(ctx, 31, 0x251BDCu);
    ctx->pc = 0x251BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251BD4u;
    // 0x251bd8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251BF8u, 0x251BD4u, 0x251BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251BDCu;
label_251bdc:
    // 0x251bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251be4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x251be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251be8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x251be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251bec: 0x8093f40  j           func_24FD00
    ctx->pc = 0x251BECu;
    ctx->pc = 0x251BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251BECu;
    // 0x251bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x251BF4u;
}
