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

// Function: sub_003F0050
// Address: 0x3f0050 - 0x3f00c8
void sub_003F0050_0x3f0050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0050_0x3f0050");
#endif

    switch (ctx->pc) {
        case 0x3f0064u: goto label_3f0064;
        case 0x3f0098u: goto label_3f0098;
        case 0x3f00b4u: goto label_3f00b4;
        default: break;
    }

    ctx->pc = 0x3f0050u;

    // 0x3f0050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f0050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f0054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f0058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f005c: 0xc0fbec8  jal         func_3EFB20
    ctx->pc = 0x3F005Cu;
    SET_GPR_U32(ctx, 31, 0x3F0064u);
    ctx->pc = 0x3F0060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F005Cu;
    // 0x3f0060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EFB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EFB20u, 0x3F005Cu, 0x3F0064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0064u;
label_3f0064:
    // 0x3f0064: 0x260207a0  addiu       $v0, $s0, 0x7A0
    ctx->pc = 0x3f0064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x3f0068: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x3f0068u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x3f006c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3f006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3f0070: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3f0070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f0074: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3f0074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3f0078: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3f0078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3f007c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F007Cu;
    {
        const bool branch_taken_0x3f007c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f007c) {
            ctx->pc = 0x3F00A0u;
            goto label_3f00a0;
        }
    }
    ctx->pc = 0x3F0084u;
    // 0x3f0084: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3f0084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3f0088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f008c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3f008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3f0090: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x3F0090u;
    SET_GPR_U32(ctx, 31, 0x3F0098u);
    ctx->pc = 0x3F0094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0090u;
    // 0x3f0094: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x3F0090u, 0x3F0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0098u;
label_3f0098:
    // 0x3f0098: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F0098u;
    {
        const bool branch_taken_0x3f0098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0098) {
            ctx->pc = 0x3F00B8u;
            goto label_3f00b8;
        }
    }
    ctx->pc = 0x3F00A0u;
label_3f00a0:
    // 0x3f00a0: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3f00a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3f00a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f00a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f00a8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3f00a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3f00ac: 0xc0a0458  jal         func_281160
    ctx->pc = 0x3F00ACu;
    SET_GPR_U32(ctx, 31, 0x3F00B4u);
    ctx->pc = 0x3F00B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F00ACu;
    // 0x3f00b0: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x3F00ACu, 0x3F00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F00B4u;
label_3f00b4:
    // 0x3f00b4: 0x0  nop
    ctx->pc = 0x3f00b4u;
    // NOP
label_3f00b8:
    // 0x3f00b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f00b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f00bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f00bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f00c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F00C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00C0u;
        // 0x3f00c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F00C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F00C8u;
}
