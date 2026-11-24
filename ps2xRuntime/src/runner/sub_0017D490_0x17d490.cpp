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

// Function: sub_0017D490
// Address: 0x17d490 - 0x17d500
void sub_0017D490_0x17d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D490_0x17d490");
#endif

    switch (ctx->pc) {
        case 0x17d4d8u: goto label_17d4d8;
        case 0x17d4e4u: goto label_17d4e4;
        case 0x17d4f0u: goto label_17d4f0;
        default: break;
    }

    ctx->pc = 0x17d490u;

    // 0x17d490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d494: 0x278280a0  addiu       $v0, $gp, -0x7F60
    ctx->pc = 0x17d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934688));
    // 0x17d498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d49c: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x17d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x17d4a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d4a4: 0xac820118  sw          $v0, 0x118($a0)
    ctx->pc = 0x17d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 2));
    // 0x17d4a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x17d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x17d4b0: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x17d4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17d4b4: 0xac85007c  sw          $a1, 0x7C($a0)
    ctx->pc = 0x17d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
    // 0x17d4b8: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x17d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x17d4bc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x17d4bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d4c0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17d4c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d4c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17d4cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x17d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17d4d0: 0xc0a83dc  jal         func_2A0F70
    ctx->pc = 0x17D4D0u;
    SET_GPR_U32(ctx, 31, 0x17D4D8u);
    ctx->pc = 0x17D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4D0u;
    // 0x17d4d4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F70u, 0x17D4D0u, 0x17D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4D8u;
label_17d4d8:
    // 0x17d4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4dc: 0xc05f540  jal         func_17D500
    ctx->pc = 0x17D4DCu;
    SET_GPR_U32(ctx, 31, 0x17D4E4u);
    ctx->pc = 0x17D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4DCu;
    // 0x17d4e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D500u, 0x17D4DCu, 0x17D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4E4u;
label_17d4e4:
    // 0x17d4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4e8: 0xc05f61c  jal         func_17D870
    ctx->pc = 0x17D4E8u;
    SET_GPR_U32(ctx, 31, 0x17D4F0u);
    ctx->pc = 0x17D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4E8u;
    // 0x17d4ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D870u, 0x17D4E8u, 0x17D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4F0u;
label_17d4f0:
    // 0x17d4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x17D4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4F8u;
        // 0x17d4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D500u;
}
