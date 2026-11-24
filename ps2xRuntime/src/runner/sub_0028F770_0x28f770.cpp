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

// Function: sub_0028F770
// Address: 0x28f770 - 0x28f820
void sub_0028F770_0x28f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F770_0x28f770");
#endif

    switch (ctx->pc) {
        case 0x28f7c4u: goto label_28f7c4;
        case 0x28f7ccu: goto label_28f7cc;
        case 0x28f7d8u: goto label_28f7d8;
        case 0x28f7e8u: goto label_28f7e8;
        case 0x28f7f0u: goto label_28f7f0;
        default: break;
    }

    ctx->pc = 0x28f770u;

    // 0x28f770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f774: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x28f774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x28f778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f77c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x28f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x28f780: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x28f780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x28f784: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x28f784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x28f788: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x28f788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x28f78c: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F78Cu;
    {
        const bool branch_taken_0x28f78c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x28F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F78Cu;
        // 0x28f790: 0xac23cc34  sw          $v1, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f78c) {
            ctx->pc = 0x28F7A0u;
            goto label_28f7a0;
        }
    }
    ctx->pc = 0x28F794u;
    // 0x28f794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F794u;
    {
        const bool branch_taken_0x28f794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F794u;
        // 0x28f798: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f794) {
            ctx->pc = 0x28F7A4u;
            goto label_28f7a4;
        }
    }
    ctx->pc = 0x28F79Cu;
    // 0x28f79c: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x28f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
label_28f7a0:
    // 0x28f7a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28f7a4:
    // 0x28f7a4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x28f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x28f7a8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x28f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x28f7ac: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x28f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x28f7b0: 0x24424500  addiu       $v0, $v0, 0x4500
    ctx->pc = 0x28f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17664));
    // 0x28f7b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f7b8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x28f7b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f7bc: 0xc052d94  jal         func_14B650
    ctx->pc = 0x28F7BCu;
    SET_GPR_U32(ctx, 31, 0x28F7C4u);
    ctx->pc = 0x28F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7BCu;
    // 0x28f7c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B650u, 0x28F7BCu, 0x28F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7C4u;
label_28f7c4:
    // 0x28f7c4: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x28F7C4u;
    SET_GPR_U32(ctx, 31, 0x28F7CCu);
    ctx->pc = 0x28F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7C4u;
    // 0x28f7c8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x28F7C4u, 0x28F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7CCu;
label_28f7cc:
    // 0x28f7cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28F7CCu;
    {
        const bool branch_taken_0x28f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f7cc) {
            ctx->pc = 0x28F7F8u;
            goto label_28f7f8;
        }
    }
    ctx->pc = 0x28F7D4u;
    // 0x28f7d4: 0x0  nop
    ctx->pc = 0x28f7d4u;
    // NOP
label_28f7d8:
    // 0x28f7d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x28f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x28f7dc: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x28f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x28f7e0: 0xc04c918  jal         func_132460
    ctx->pc = 0x28F7E0u;
    SET_GPR_U32(ctx, 31, 0x28F7E8u);
    ctx->pc = 0x28F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7E0u;
    // 0x28f7e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x28F7E0u, 0x28F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7E8u;
label_28f7e8:
    // 0x28f7e8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x28F7E8u;
    SET_GPR_U32(ctx, 31, 0x28F7F0u);
    ctx->pc = 0x28F7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7E8u;
    // 0x28f7ec: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x28F7E8u, 0x28F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7F0u;
label_28f7f0:
    // 0x28f7f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28F7F0u;
    {
        const bool branch_taken_0x28f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f7f0) {
            ctx->pc = 0x28F7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f7d8;
        }
    }
    ctx->pc = 0x28F7F8u;
label_28f7f8:
    // 0x28f7f8: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x28f7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x28f7fc: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x28f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x82CC34u));
    // 0x28f800: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x28f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x28f804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f808: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28f808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28f80c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x28f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x28f810: 0xac23cc34  sw          $v1, -0x33CC($at)
    ctx->pc = 0x28f810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CC34u, _value); } while (0);
    // 0x28f814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f818: 0x3e00008  jr          $ra
    ctx->pc = 0x28F818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F818u;
        // 0x28f81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F820u;
}
