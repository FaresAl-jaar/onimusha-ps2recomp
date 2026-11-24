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

// Function: sub_0022ECA8
// Address: 0x22eca8 - 0x22ed30
void sub_0022ECA8_0x22eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ECA8_0x22eca8");
#endif

    switch (ctx->pc) {
        case 0x22ecd4u: goto label_22ecd4;
        case 0x22ecdcu: goto label_22ecdc;
        case 0x22ecf4u: goto label_22ecf4;
        case 0x22ecfcu: goto label_22ecfc;
        case 0x22ed08u: goto label_22ed08;
        default: break;
    }

    ctx->pc = 0x22eca8u;

    // 0x22eca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22eca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ecac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ecb0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22ecb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ecb8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x22ecb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22ecc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22ecc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22ecc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22eccc: 0xc08bae8  jal         func_22EBA0
    ctx->pc = 0x22ECCCu;
    SET_GPR_U32(ctx, 31, 0x22ECD4u);
    ctx->pc = 0x22ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECCCu;
    // 0x22ecd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EBA0u, 0x22ECCCu, 0x22ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECD4u;
label_22ecd4:
    // 0x22ecd4: 0xc049f18  jal         func_127C60
    ctx->pc = 0x22ECD4u;
    SET_GPR_U32(ctx, 31, 0x22ECDCu);
    ctx->pc = 0x22ECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECD4u;
    // 0x22ecd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x22ECD4u, 0x22ECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECDCu;
label_22ecdc:
    // 0x22ecdc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22ece0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x22ece0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22ece4: 0x24a5a2b0  addiu       $a1, $a1, -0x5D50
    ctx->pc = 0x22ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943408));
    // 0x22ece8: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x22ece8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22ecec: 0xc049f66  jal         func_127D98
    ctx->pc = 0x22ECECu;
    SET_GPR_U32(ctx, 31, 0x22ECF4u);
    ctx->pc = 0x22ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECECu;
    // 0x22ecf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D98u, 0x22ECECu, 0x22ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECF4u;
label_22ecf4:
    // 0x22ecf4: 0xc049f18  jal         func_127C60
    ctx->pc = 0x22ECF4u;
    SET_GPR_U32(ctx, 31, 0x22ECFCu);
    ctx->pc = 0x22ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ECF4u;
    // 0x22ecf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x22ECF4u, 0x22ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECFCu;
label_22ecfc:
    // 0x22ecfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ecfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed00: 0xc049f18  jal         func_127C60
    ctx->pc = 0x22ED00u;
    SET_GPR_U32(ctx, 31, 0x22ED08u);
    ctx->pc = 0x22ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED00u;
    // 0x22ed04: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x22ED00u, 0x22ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED08u;
label_22ed08:
    // 0x22ed08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ed08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ed0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ed10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ed14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ed18: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22ed1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22ed1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ed20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22ed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22ed24: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x22ed24u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22ed28: 0x808bae8  j           func_22EBA0
    ctx->pc = 0x22ED28u;
    ctx->pc = 0x22ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED28u;
    // 0x22ed2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EBA0u;
    sub_0022EBA0_0x22eba0(rdram, ctx, runtime); return;
    ctx->pc = 0x22ED30u;
}
