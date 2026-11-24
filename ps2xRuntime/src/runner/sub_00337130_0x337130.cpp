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

// Function: sub_00337130
// Address: 0x337130 - 0x337210
void sub_00337130_0x337130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337130_0x337130");
#endif

    switch (ctx->pc) {
        case 0x3371a4u: goto label_3371a4;
        case 0x3371b8u: goto label_3371b8;
        case 0x3371f4u: goto label_3371f4;
        default: break;
    }

    ctx->pc = 0x337130u;

    // 0x337130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x337130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x337134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x337134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x337138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33713c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x337140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337144: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x337144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337148: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x337148u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33714c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x33714cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337150: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x337150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x337154: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x337154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x337158: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x337158u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x33715c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x33715cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x337160: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337164: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x337164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x337168: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x337168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33716c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33716Cu;
    {
        const bool branch_taken_0x33716c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x337170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33716Cu;
        // 0x337170: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33716c) {
            ctx->pc = 0x337180u;
            goto label_337180;
        }
    }
    ctx->pc = 0x337174u;
    // 0x337174: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x337174u;
    {
        const bool branch_taken_0x337174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337174u;
        // 0x337178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337174) {
            ctx->pc = 0x3371F8u;
            goto label_3371f8;
        }
    }
    ctx->pc = 0x33717Cu;
    // 0x33717c: 0x0  nop
    ctx->pc = 0x33717cu;
    // NOP
label_337180:
    // 0x337180: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x337180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x337184: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x337184u;
    {
        const bool branch_taken_0x337184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337184) {
            ctx->pc = 0x337198u;
            goto label_337198;
        }
    }
    ctx->pc = 0x33718Cu;
    // 0x33718c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x33718Cu;
    {
        const bool branch_taken_0x33718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33718Cu;
        // 0x337190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33718c) {
            ctx->pc = 0x3371F8u;
            goto label_3371f8;
        }
    }
    ctx->pc = 0x337194u;
    // 0x337194: 0x0  nop
    ctx->pc = 0x337194u;
    // NOP
label_337198:
    // 0x337198: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x337198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33719c: 0xc0bd1dc  jal         func_2F4770
    ctx->pc = 0x33719Cu;
    SET_GPR_U32(ctx, 31, 0x3371A4u);
    ctx->pc = 0x3371A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33719Cu;
    // 0x3371a0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4770u, 0x33719Cu, 0x3371A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371A4u;
label_3371a4:
    // 0x3371a4: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x3371a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3371a8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3371a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3371ac: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3371acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3371b0: 0xc0bd1dc  jal         func_2F4770
    ctx->pc = 0x3371B0u;
    SET_GPR_U32(ctx, 31, 0x3371B8u);
    ctx->pc = 0x3371B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371B0u;
    // 0x3371b4: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4770u, 0x3371B0u, 0x3371B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371B8u;
label_3371b8:
    // 0x3371b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3371b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3371bc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x3371bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3371c0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3371c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3371c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3371C4u;
    {
        const bool branch_taken_0x3371c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3371c4) {
            ctx->pc = 0x3371D8u;
            goto label_3371d8;
        }
    }
    ctx->pc = 0x3371CCu;
    // 0x3371cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3371CCu;
    {
        const bool branch_taken_0x3371cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3371D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371CCu;
        // 0x3371d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371cc) {
            ctx->pc = 0x3371F8u;
            goto label_3371f8;
        }
    }
    ctx->pc = 0x3371D4u;
    // 0x3371d4: 0x0  nop
    ctx->pc = 0x3371d4u;
    // NOP
label_3371d8:
    // 0x3371d8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3371d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3371dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3371DCu;
    {
        const bool branch_taken_0x3371dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3371E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371DCu;
        // 0x3371e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371dc) {
            ctx->pc = 0x3371ECu;
            goto label_3371ec;
        }
    }
    ctx->pc = 0x3371E4u;
    // 0x3371e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3371E4u;
    {
        const bool branch_taken_0x3371e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3371E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371E4u;
        // 0x3371e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3371e4) {
            ctx->pc = 0x3371F4u;
            goto label_3371f4;
        }
    }
    ctx->pc = 0x3371ECu;
label_3371ec:
    // 0x3371ec: 0xc0cdc28  jal         func_3370A0
    ctx->pc = 0x3371ECu;
    SET_GPR_U32(ctx, 31, 0x3371F4u);
    ctx->pc = 0x3371F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371ECu;
    // 0x3371f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3370A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3370A0u, 0x3371ECu, 0x3371F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371F4u;
label_3371f4:
    // 0x3371f4: 0x0  nop
    ctx->pc = 0x3371f4u;
    // NOP
label_3371f8:
    // 0x3371f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3371f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3371fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3371fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337208: 0x3e00008  jr          $ra
    ctx->pc = 0x337208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337208u;
        // 0x33720c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337210u;
}
