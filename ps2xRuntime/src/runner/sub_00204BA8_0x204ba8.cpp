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

// Function: sub_00204BA8
// Address: 0x204ba8 - 0x204c1c
void sub_00204BA8_0x204ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204BA8_0x204ba8");
#endif

    switch (ctx->pc) {
        case 0x204bc4u: goto label_204bc4;
        case 0x204bf8u: goto label_204bf8;
        case 0x204c00u: goto label_204c00;
        default: break;
    }

    ctx->pc = 0x204ba8u;

    // 0x204ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x204bbc: 0xc081d84  jal         func_207610
    ctx->pc = 0x204BBCu;
    SET_GPR_U32(ctx, 31, 0x204BC4u);
    ctx->pc = 0x204BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BBCu;
    // 0x204bc0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x204BBCu, 0x204BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BC4u;
label_204bc4:
    // 0x204bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204bc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x204bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204bcc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x204BCCu;
    {
        const bool branch_taken_0x204bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BCCu;
        // 0x204bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bcc) {
            ctx->pc = 0x204BF0u;
            goto label_204bf0;
        }
    }
    ctx->pc = 0x204BD4u;
    // 0x204bd4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x204bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204be0: 0x24846c68  addiu       $a0, $a0, 0x6C68
    ctx->pc = 0x204be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27752));
    // 0x204be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204be8: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x204BE8u;
    ctx->pc = 0x204BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BE8u;
    // 0x204bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x204BF0u;
label_204bf0:
    // 0x204bf0: 0xc08111a  jal         func_204468
    ctx->pc = 0x204BF0u;
    SET_GPR_U32(ctx, 31, 0x204BF8u);
    ctx->pc = 0x204468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204468u, 0x204BF0u, 0x204BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BF8u;
label_204bf8:
    // 0x204bf8: 0xc081c12  jal         func_207048
    ctx->pc = 0x204BF8u;
    SET_GPR_U32(ctx, 31, 0x204C00u);
    ctx->pc = 0x204BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BF8u;
    // 0x204bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x204BF8u, 0x204C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C00u;
label_204c00:
    // 0x204c00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x204c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204c14: 0x80878b0  j           func_21E2C0
    ctx->pc = 0x204C14u;
    ctx->pc = 0x204C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C14u;
    // 0x204c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E2C0u;
    sub_0021E2C0_0x21e2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x204C1Cu;
}
