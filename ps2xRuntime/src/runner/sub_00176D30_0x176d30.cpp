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

// Function: sub_00176D30
// Address: 0x176d30 - 0x176e10
void sub_00176D30_0x176d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176D30_0x176d30");
#endif

    switch (ctx->pc) {
        case 0x176d5cu: goto label_176d5c;
        default: break;
    }

    ctx->pc = 0x176d30u;

    // 0x176d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176d40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x176d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d44: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x176d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x176d48: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x176D48u;
    {
        const bool branch_taken_0x176d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D48u;
        // 0x176d4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d48) {
            ctx->pc = 0x176D60u;
            goto label_176d60;
        }
    }
    ctx->pc = 0x176D50u;
    // 0x176d50: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x176d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x176d54: 0xc04bfbc  jal         func_12FEF0
    ctx->pc = 0x176D54u;
    SET_GPR_U32(ctx, 31, 0x176D5Cu);
    ctx->pc = 0x176D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D54u;
    // 0x176d58: 0x24846ae8  addiu       $a0, $a0, 0x6AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEF0u, 0x176D54u, 0x176D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D5Cu;
label_176d5c:
    // 0x176d5c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x176d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_176d60:
    // 0x176d60: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x176d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x176d64: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x176D64u;
    {
        const bool branch_taken_0x176d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176d64) {
            ctx->pc = 0x176D90u;
            goto label_176d90;
        }
    }
    ctx->pc = 0x176D6Cu;
    // 0x176d6c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x176d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176d70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176D70u;
    {
        const bool branch_taken_0x176d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D70u;
        // 0x176d74: 0xae220260  sw          $v0, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d70) {
            ctx->pc = 0x176D80u;
            goto label_176d80;
        }
    }
    ctx->pc = 0x176D78u;
    // 0x176d78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x176D78u;
    {
        const bool branch_taken_0x176d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D78u;
        // 0x176d7c: 0xae200264  sw          $zero, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d78) {
            ctx->pc = 0x176DB8u;
            goto label_176db8;
        }
    }
    ctx->pc = 0x176D80u;
label_176d80:
    // 0x176d80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x176d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176d84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x176D84u;
    {
        const bool branch_taken_0x176d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D84u;
        // 0x176d88: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d84) {
            ctx->pc = 0x176DB8u;
            goto label_176db8;
        }
    }
    ctx->pc = 0x176D8Cu;
    // 0x176d8c: 0x0  nop
    ctx->pc = 0x176d8cu;
    // NOP
label_176d90:
    // 0x176d90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x176d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176d94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176D94u;
    {
        const bool branch_taken_0x176d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D94u;
        // 0x176d98: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d94) {
            ctx->pc = 0x176DA8u;
            goto label_176da8;
        }
    }
    ctx->pc = 0x176D9Cu;
    // 0x176d9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x176d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x176da0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x176DA0u;
    {
        const bool branch_taken_0x176da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DA0u;
        // 0x176da4: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176da0) {
            ctx->pc = 0x176DB8u;
            goto label_176db8;
        }
    }
    ctx->pc = 0x176DA8u;
label_176da8:
    // 0x176da8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x176dac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176db0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x176db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x176db4: 0x0  nop
    ctx->pc = 0x176db4u;
    // NOP
label_176db8:
    // 0x176db8: 0x8e220268  lw          $v0, 0x268($s1)
    ctx->pc = 0x176db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x176dbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x176DBCu;
    {
        const bool branch_taken_0x176dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176dbc) {
            ctx->pc = 0x176DD8u;
            goto label_176dd8;
        }
    }
    ctx->pc = 0x176DC4u;
    // 0x176dc4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x176dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x176dc8: 0xae30026c  sw          $s0, 0x26C($s1)
    ctx->pc = 0x176dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 16));
    // 0x176dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x176DCCu;
    {
        const bool branch_taken_0x176dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DCCu;
        // 0x176dd0: 0xae300268  sw          $s0, 0x268($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176dcc) {
            ctx->pc = 0x176DF0u;
            goto label_176df0;
        }
    }
    ctx->pc = 0x176DD4u;
    // 0x176dd4: 0x0  nop
    ctx->pc = 0x176dd4u;
    // NOP
label_176dd8:
    // 0x176dd8: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x176dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x176ddc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x176ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x176de0: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x176de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x176de4: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x176de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x176de8: 0xae30026c  sw          $s0, 0x26C($s1)
    ctx->pc = 0x176de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 16));
    // 0x176dec: 0x0  nop
    ctx->pc = 0x176decu;
    // NOP
label_176df0:
    // 0x176df0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x176df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176df4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x176df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x176df8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x176df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x176dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176e08: 0x3e00008  jr          $ra
    ctx->pc = 0x176E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E08u;
        // 0x176e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176E10u;
}
