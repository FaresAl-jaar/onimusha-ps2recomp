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

// Function: sub_0020EF40
// Address: 0x20ef40 - 0x20efa8
void sub_0020EF40_0x20ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EF40_0x20ef40");
#endif

    switch (ctx->pc) {
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef44u: goto label_20ef44;
        case 0x20ef48u: goto label_20ef48;
        case 0x20ef4cu: goto label_20ef4c;
        case 0x20ef50u: goto label_20ef50;
        case 0x20ef54u: goto label_20ef54;
        case 0x20ef58u: goto label_20ef58;
        case 0x20ef5cu: goto label_20ef5c;
        case 0x20ef60u: goto label_20ef60;
        case 0x20ef64u: goto label_20ef64;
        case 0x20ef68u: goto label_20ef68;
        case 0x20ef6cu: goto label_20ef6c;
        case 0x20ef70u: goto label_20ef70;
        case 0x20ef74u: goto label_20ef74;
        case 0x20ef78u: goto label_20ef78;
        case 0x20ef7cu: goto label_20ef7c;
        case 0x20ef80u: goto label_20ef80;
        case 0x20ef84u: goto label_20ef84;
        case 0x20ef88u: goto label_20ef88;
        case 0x20ef8cu: goto label_20ef8c;
        case 0x20ef90u: goto label_20ef90;
        case 0x20ef94u: goto label_20ef94;
        case 0x20ef98u: goto label_20ef98;
        case 0x20ef9cu: goto label_20ef9c;
        case 0x20efa0u: goto label_20efa0;
        case 0x20efa4u: goto label_20efa4;
        default: break;
    }

    ctx->pc = 0x20ef40u;

label_20ef40:
    // 0x20ef40: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20ef44:
    // 0x20ef44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ef44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20ef48:
    // 0x20ef48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20ef4c:
    // 0x20ef4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ef4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20ef50:
    // 0x20ef50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20ef54:
    // 0x20ef54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20ef58:
    // 0x20ef58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20ef5c:
    // 0x20ef5c: 0x24841310  addiu       $a0, $a0, 0x1310
    ctx->pc = 0x20ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
label_20ef60:
    // 0x20ef60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20ef64:
    // 0x20ef64: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20ef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20ef68:
    // 0x20ef68: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20ef6c:
    // 0x20ef6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20ef70:
    // 0x20ef70: 0x14660009  bne         $v1, $a2, . + 4 + (0x9 << 2)
label_20ef74:
    if (ctx->pc == 0x20EF74u) {
        ctx->pc = 0x20EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF70u;
        // 0x20ef74: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF78u;
        goto label_20ef78;
    }
    ctx->pc = 0x20EF70u;
    {
        const bool branch_taken_0x20ef70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x20EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF70u;
        // 0x20ef74: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef70) {
            ctx->pc = 0x20EF98u;
            goto label_20ef98;
        }
    }
    ctx->pc = 0x20EF78u;
label_20ef78:
    // 0x20ef78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20ef7c:
    // 0x20ef7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20ef80:
    if (ctx->pc == 0x20EF80u) {
        ctx->pc = 0x20EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF7Cu;
        // 0x20ef80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EF84u;
        goto label_20ef84;
    }
    ctx->pc = 0x20EF7Cu;
    {
        const bool branch_taken_0x20ef7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF7Cu;
        // 0x20ef80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef7c) {
            ctx->pc = 0x20EF98u;
            goto label_20ef98;
        }
    }
    ctx->pc = 0x20EF84u;
label_20ef84:
    // 0x20ef84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ef88:
    // 0x20ef88: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20ef8c:
    // 0x20ef8c: 0x60f809  jalr        $v1
label_20ef90:
    if (ctx->pc == 0x20EF90u) {
        ctx->pc = 0x20EF94u;
        goto label_20ef94;
    }
    ctx->pc = 0x20EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20EF94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EF8Cu, 0x20EF94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20EF94u;
label_20ef94:
    // 0x20ef94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_20ef98:
    // 0x20ef98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ef98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ef9c:
    // 0x20ef9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20ef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20efa0:
    // 0x20efa0: 0x3e00008  jr          $ra
label_20efa4:
    if (ctx->pc == 0x20EFA4u) {
        ctx->pc = 0x20EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFA0u;
        // 0x20efa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EFA8u;
        goto label_fallthrough_0x20efa0;
    }
    ctx->pc = 0x20EFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFA0u;
        // 0x20efa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20efa0:
    ctx->pc = 0x20EFA8u;
}
