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

// Function: sub_00382DB0
// Address: 0x382db0 - 0x382e5c
void sub_00382DB0_0x382db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382DB0_0x382db0");
#endif

    switch (ctx->pc) {
        case 0x382e24u: goto label_382e24;
        default: break;
    }

    ctx->pc = 0x382db0u;

    // 0x382db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x382db4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x382db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x382db8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x382dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382dc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382dc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x382dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382dc8: 0x2470fff3  addiu       $s0, $v1, -0xD
    ctx->pc = 0x382dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x382dcc: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x382dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x382dd0: 0x480001d  bltz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x382DD0u;
    {
        const bool branch_taken_0x382dd0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x382DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DD0u;
        // 0x382dd4: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382dd0) {
            ctx->pc = 0x382E48u;
            goto label_382e48;
        }
    }
    ctx->pc = 0x382DD8u;
    // 0x382dd8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x382DD8u;
    {
        const bool branch_taken_0x382dd8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x382DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DD8u;
        // 0x382ddc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382dd8) {
            ctx->pc = 0x382DF0u;
            goto label_382df0;
        }
    }
    ctx->pc = 0x382DE0u;
    // 0x382de0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x382DE0u;
    {
        const bool branch_taken_0x382de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x382de0) {
            ctx->pc = 0x382DECu;
            goto label_382dec;
        }
    }
    ctx->pc = 0x382DE8u;
    // 0x382de8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x382de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_382dec:
    // 0x382dec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x382decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382df0:
    // 0x382df0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x382df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x382df4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x382df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x382df8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x382df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x382dfc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x382dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x382e00: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x382e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x382e04: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x382e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x382e08: 0x80620100  lb          $v0, 0x100($v1)
    ctx->pc = 0x382e08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x382e0c: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x382e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
    // 0x382e10: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x382e10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x382e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e18: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x382e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x382e1c: 0xc0e0b98  jal         func_382E60
    ctx->pc = 0x382E1Cu;
    SET_GPR_U32(ctx, 31, 0x382E24u);
    ctx->pc = 0x382E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382E1Cu;
    // 0x382e20: 0xa0620100  sb          $v0, 0x100($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382E60u, 0x382E1Cu, 0x382E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382E24u;
label_382e24:
    // 0x382e24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x382e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x382e28: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x382E28u;
    {
        const bool branch_taken_0x382e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382e28) {
            ctx->pc = 0x382E48u;
            goto label_382e48;
        }
    }
    ctx->pc = 0x382E30u;
    // 0x382e30: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x382e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x382e34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x382e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x382e38: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x382e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x382e3c: 0x802027  not         $a0, $a0
    ctx->pc = 0x382e3cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x382e40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x382e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x382e44: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x382e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_382e48:
    // 0x382e48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x382e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382e54: 0x3e00008  jr          $ra
    ctx->pc = 0x382E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E54u;
        // 0x382e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382E5Cu;
}
