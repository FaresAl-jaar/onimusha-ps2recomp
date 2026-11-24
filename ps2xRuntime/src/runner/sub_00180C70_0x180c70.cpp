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

// Function: sub_00180C70
// Address: 0x180c70 - 0x180dd4
void sub_00180C70_0x180c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180C70_0x180c70");
#endif

    switch (ctx->pc) {
        case 0x180ce4u: goto label_180ce4;
        case 0x180cf4u: goto label_180cf4;
        case 0x180d50u: goto label_180d50;
        case 0x180d64u: goto label_180d64;
        case 0x180dbcu: goto label_180dbc;
        default: break;
    }

    ctx->pc = 0x180c70u;

    // 0x180c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180c74: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x180c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x180c78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x180c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x180c7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180c80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x180c84: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x180c84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180c8c: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x180c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x180c90: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x180c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x180c94: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x180c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c98: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x180c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x180c9c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x180c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x180ca0: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x180ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x180ca4: 0x24e7d2c0  addiu       $a3, $a3, -0x2D40
    ctx->pc = 0x180ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955712));
    // 0x180ca8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x180ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x180cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x180cb0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180cb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x180cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x180cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180cbc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x180cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180cc0: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x180cc0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180cc4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x180cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180cc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x180cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180ccc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x180cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180cd0: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x180cd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180cd8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x180cdc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x180CDCu;
    SET_GPR_U32(ctx, 31, 0x180CE4u);
    ctx->pc = 0x180CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180CDCu;
    // 0x180ce0: 0x7d260000  sq          $a2, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x180CDCu, 0x180CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180CE4u;
label_180ce4:
    // 0x180ce4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x180ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x180ce8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x180ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x180cec: 0xc041472  jal         func_1051C8
    ctx->pc = 0x180CECu;
    SET_GPR_U32(ctx, 31, 0x180CF4u);
    ctx->pc = 0x180CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180CECu;
    // 0x180cf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x180CECu, 0x180CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180CF4u;
label_180cf4:
    // 0x180cf4: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x180cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x180cf8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x180cfc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x180cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x180d00: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x180d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x180d04: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x180d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180d08: 0x2484d290  addiu       $a0, $a0, -0x2D70
    ctx->pc = 0x180d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955664));
    // 0x180d0c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x180d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x180d10: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x180d14: 0x2463d294  addiu       $v1, $v1, -0x2D6C
    ctx->pc = 0x180d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955668));
    // 0x180d18: 0x2442d298  addiu       $v0, $v0, -0x2D68
    ctx->pc = 0x180d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955672));
    // 0x180d1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180d20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x180d24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x180d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180d28: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x180d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180d2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180d30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180d34: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x180d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180d38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x180d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180d3c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x180d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x180d40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180d44: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x180d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x180d48: 0xc041460  jal         func_105180
    ctx->pc = 0x180D48u;
    SET_GPR_U32(ctx, 31, 0x180D50u);
    ctx->pc = 0x180D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D48u;
    // 0x180d4c: 0x2423021  addu        $a2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x180D48u, 0x180D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D50u;
label_180d50:
    // 0x180d50: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x180d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x180d54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180d58: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x180d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x180d5c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x180D5Cu;
    SET_GPR_U32(ctx, 31, 0x180D64u);
    ctx->pc = 0x180D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D5Cu;
    // 0x180d60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x180D5Cu, 0x180D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D64u;
label_180d64:
    // 0x180d64: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x180d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x180d68: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x180d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x180d6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x180d70: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x180d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x180d74: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180d78: 0x2484d290  addiu       $a0, $a0, -0x2D70
    ctx->pc = 0x180d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955664));
    // 0x180d7c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x180d80: 0x2463d294  addiu       $v1, $v1, -0x2D6C
    ctx->pc = 0x180d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955668));
    // 0x180d84: 0x2442d298  addiu       $v0, $v0, -0x2D68
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955672));
    // 0x180d88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180d8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x180d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x180d90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x180d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180d94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x180d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180d98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x180d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180d9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x180d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180da0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180da4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x180da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180da8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x180da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x180dac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180db0: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x180db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x180db4: 0xc041460  jal         func_105180
    ctx->pc = 0x180DB4u;
    SET_GPR_U32(ctx, 31, 0x180DBCu);
    ctx->pc = 0x180DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DB4u;
    // 0x180db8: 0x2423021  addu        $a2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x180DB4u, 0x180DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DBCu;
label_180dbc:
    // 0x180dbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x180dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180dc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x180DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DCCu;
        // 0x180dd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180DD4u;
}
