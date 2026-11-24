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

// Function: sub_0020FA40
// Address: 0x20fa40 - 0x20fadc
void sub_0020FA40_0x20fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FA40_0x20fa40");
#endif

    switch (ctx->pc) {
        case 0x20fa40u: goto label_20fa40;
        case 0x20fa44u: goto label_20fa44;
        case 0x20fa48u: goto label_20fa48;
        case 0x20fa4cu: goto label_20fa4c;
        case 0x20fa50u: goto label_20fa50;
        case 0x20fa54u: goto label_20fa54;
        case 0x20fa58u: goto label_20fa58;
        case 0x20fa5cu: goto label_20fa5c;
        case 0x20fa60u: goto label_20fa60;
        case 0x20fa64u: goto label_20fa64;
        case 0x20fa68u: goto label_20fa68;
        case 0x20fa6cu: goto label_20fa6c;
        case 0x20fa70u: goto label_20fa70;
        case 0x20fa74u: goto label_20fa74;
        case 0x20fa78u: goto label_20fa78;
        case 0x20fa7cu: goto label_20fa7c;
        case 0x20fa80u: goto label_20fa80;
        case 0x20fa84u: goto label_20fa84;
        case 0x20fa88u: goto label_20fa88;
        case 0x20fa8cu: goto label_20fa8c;
        case 0x20fa90u: goto label_20fa90;
        case 0x20fa94u: goto label_20fa94;
        case 0x20fa98u: goto label_20fa98;
        case 0x20fa9cu: goto label_20fa9c;
        case 0x20faa0u: goto label_20faa0;
        case 0x20faa4u: goto label_20faa4;
        case 0x20faa8u: goto label_20faa8;
        case 0x20faacu: goto label_20faac;
        case 0x20fab0u: goto label_20fab0;
        case 0x20fab4u: goto label_20fab4;
        case 0x20fab8u: goto label_20fab8;
        case 0x20fabcu: goto label_20fabc;
        case 0x20fac0u: goto label_20fac0;
        case 0x20fac4u: goto label_20fac4;
        case 0x20fac8u: goto label_20fac8;
        case 0x20faccu: goto label_20facc;
        case 0x20fad0u: goto label_20fad0;
        case 0x20fad4u: goto label_20fad4;
        case 0x20fad8u: goto label_20fad8;
        default: break;
    }

    ctx->pc = 0x20fa40u;

label_20fa40:
    // 0x20fa40: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20fa44:
    // 0x20fa44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20fa44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20fa48:
    // 0x20fa48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20fa4c:
    // 0x20fa4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20fa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20fa50:
    // 0x20fa50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20fa54:
    // 0x20fa54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_20fa58:
    // 0x20fa58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20fa5c:
    // 0x20fa5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_20fa60:
    // 0x20fa60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20fa64:
    // 0x20fa64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_20fa68:
    // 0x20fa68: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x20fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20fa6c:
    // 0x20fa6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20fa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20fa70:
    // 0x20fa70: 0xc084990  jal         func_212640
label_20fa74:
    if (ctx->pc == 0x20FA74u) {
        ctx->pc = 0x20FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA70u;
        // 0x20fa74: 0x24701320  addiu       $s0, $v1, 0x1320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA78u;
        goto label_20fa78;
    }
    ctx->pc = 0x20FA70u;
    SET_GPR_U32(ctx, 31, 0x20FA78u);
    ctx->pc = 0x20FA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FA70u;
    // 0x20fa74: 0x24701320  addiu       $s0, $v1, 0x1320 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x20FA70u, 0x20FA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA78u;
label_20fa78:
    // 0x20fa78: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x20fa78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20fa7c:
    // 0x20fa7c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_20fa80:
    if (ctx->pc == 0x20FA80u) {
        ctx->pc = 0x20FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA7Cu;
        // 0x20fa80: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA84u;
        goto label_20fa84;
    }
    ctx->pc = 0x20FA7Cu;
    {
        const bool branch_taken_0x20fa7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA7Cu;
        // 0x20fa80: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa7c) {
            ctx->pc = 0x20FAA8u;
            goto label_20faa8;
        }
    }
    ctx->pc = 0x20FA84u;
label_20fa84:
    // 0x20fa84: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_20fa88:
    if (ctx->pc == 0x20FA88u) {
        ctx->pc = 0x20FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA84u;
        // 0x20fa88: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA8Cu;
        goto label_20fa8c;
    }
    ctx->pc = 0x20FA84u;
    {
        const bool branch_taken_0x20fa84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA84u;
        // 0x20fa88: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa84) {
            ctx->pc = 0x20FAACu;
            goto label_20faac;
        }
    }
    ctx->pc = 0x20FA8Cu;
label_20fa8c:
    // 0x20fa8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20fa90:
    // 0x20fa90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20fa94:
    // 0x20fa94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20fa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20fa98:
    // 0x20fa98: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_20fa9c:
    // 0x20fa9c: 0x40f809  jalr        $v0
label_20faa0:
    if (ctx->pc == 0x20FAA0u) {
        ctx->pc = 0x20FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA9Cu;
        // 0x20faa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAA4u;
        goto label_20faa4;
    }
    ctx->pc = 0x20FA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20FAA4u);
        ctx->pc = 0x20FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA9Cu;
        // 0x20faa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FA9Cu, 0x20FAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FAA4u;
label_20faa4:
    // 0x20faa4: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x20faa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_20faa8:
    // 0x20faa8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x20faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_20faac:
    // 0x20faac: 0x2a230000  slti        $v1, $s1, 0x0
    ctx->pc = 0x20faacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_20fab0:
    // 0x20fab0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20fab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_20fab4:
    // 0x20fab4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20fab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20fab8:
    // 0x20fab8: 0xc084996  jal         func_212658
label_20fabc:
    if (ctx->pc == 0x20FABCu) {
        ctx->pc = 0x20FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB8u;
        // 0x20fabc: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAC0u;
        goto label_20fac0;
    }
    ctx->pc = 0x20FAB8u;
    SET_GPR_U32(ctx, 31, 0x20FAC0u);
    ctx->pc = 0x20FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FAB8u;
    // 0x20fabc: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x20FAB8u, 0x20FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FAC0u;
label_20fac0:
    // 0x20fac0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20fac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20fac4:
    // 0x20fac4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20fac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20fac8:
    // 0x20fac8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20fac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20facc:
    // 0x20facc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20faccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20fad0:
    // 0x20fad0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20fad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_20fad4:
    // 0x20fad4: 0x3e00008  jr          $ra
label_20fad8:
    if (ctx->pc == 0x20FAD8u) {
        ctx->pc = 0x20FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD4u;
        // 0x20fad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FADCu;
        goto label_fallthrough_0x20fad4;
    }
    ctx->pc = 0x20FAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD4u;
        // 0x20fad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20fad4:
    ctx->pc = 0x20FADCu;
}
