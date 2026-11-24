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

// Function: sub_001E5FC0
// Address: 0x1e5fc0 - 0x1e6098
void sub_001E5FC0_0x1e5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5FC0_0x1e5fc0");
#endif

    switch (ctx->pc) {
        case 0x1e5fc0u: goto label_1e5fc0;
        case 0x1e5fc4u: goto label_1e5fc4;
        case 0x1e5fc8u: goto label_1e5fc8;
        case 0x1e5fccu: goto label_1e5fcc;
        case 0x1e5fd0u: goto label_1e5fd0;
        case 0x1e5fd4u: goto label_1e5fd4;
        case 0x1e5fd8u: goto label_1e5fd8;
        case 0x1e5fdcu: goto label_1e5fdc;
        case 0x1e5fe0u: goto label_1e5fe0;
        case 0x1e5fe4u: goto label_1e5fe4;
        case 0x1e5fe8u: goto label_1e5fe8;
        case 0x1e5fecu: goto label_1e5fec;
        case 0x1e5ff0u: goto label_1e5ff0;
        case 0x1e5ff4u: goto label_1e5ff4;
        case 0x1e5ff8u: goto label_1e5ff8;
        case 0x1e5ffcu: goto label_1e5ffc;
        case 0x1e6000u: goto label_1e6000;
        case 0x1e6004u: goto label_1e6004;
        case 0x1e6008u: goto label_1e6008;
        case 0x1e600cu: goto label_1e600c;
        case 0x1e6010u: goto label_1e6010;
        case 0x1e6014u: goto label_1e6014;
        case 0x1e6018u: goto label_1e6018;
        case 0x1e601cu: goto label_1e601c;
        case 0x1e6020u: goto label_1e6020;
        case 0x1e6024u: goto label_1e6024;
        case 0x1e6028u: goto label_1e6028;
        case 0x1e602cu: goto label_1e602c;
        case 0x1e6030u: goto label_1e6030;
        case 0x1e6034u: goto label_1e6034;
        case 0x1e6038u: goto label_1e6038;
        case 0x1e603cu: goto label_1e603c;
        case 0x1e6040u: goto label_1e6040;
        case 0x1e6044u: goto label_1e6044;
        case 0x1e6048u: goto label_1e6048;
        case 0x1e604cu: goto label_1e604c;
        case 0x1e6050u: goto label_1e6050;
        case 0x1e6054u: goto label_1e6054;
        case 0x1e6058u: goto label_1e6058;
        case 0x1e605cu: goto label_1e605c;
        case 0x1e6060u: goto label_1e6060;
        case 0x1e6064u: goto label_1e6064;
        case 0x1e6068u: goto label_1e6068;
        case 0x1e606cu: goto label_1e606c;
        case 0x1e6070u: goto label_1e6070;
        case 0x1e6074u: goto label_1e6074;
        case 0x1e6078u: goto label_1e6078;
        case 0x1e607cu: goto label_1e607c;
        case 0x1e6080u: goto label_1e6080;
        case 0x1e6084u: goto label_1e6084;
        case 0x1e6088u: goto label_1e6088;
        case 0x1e608cu: goto label_1e608c;
        case 0x1e6090u: goto label_1e6090;
        case 0x1e6094u: goto label_1e6094;
        default: break;
    }

    ctx->pc = 0x1e5fc0u;

label_1e5fc0:
    // 0x1e5fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e5fc4:
    // 0x1e5fc4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e5fc8:
    // 0x1e5fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e5fcc:
    // 0x1e5fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5fd0:
    // 0x1e5fd0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e5fd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5fd4:
    // 0x1e5fd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e5fd8:
    if (ctx->pc == 0x1E5FD8u) {
        ctx->pc = 0x1E5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FD4u;
        // 0x1e5fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5FDCu;
        goto label_1e5fdc;
    }
    ctx->pc = 0x1E5FD4u;
    {
        const bool branch_taken_0x1e5fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FD4u;
        // 0x1e5fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fd4) {
            ctx->pc = 0x1E5FE8u;
            goto label_1e5fe8;
        }
    }
    ctx->pc = 0x1E5FDCu;
label_1e5fdc:
    // 0x1e5fdc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1e5fe0:
    if (ctx->pc == 0x1E5FE0u) {
        ctx->pc = 0x1E5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FDCu;
        // 0x1e5fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5FE4u;
        goto label_1e5fe4;
    }
    ctx->pc = 0x1E5FDCu;
    {
        const bool branch_taken_0x1e5fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FDCu;
        // 0x1e5fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fdc) {
            ctx->pc = 0x1E6088u;
            goto label_1e6088;
        }
    }
    ctx->pc = 0x1E5FE4u;
label_1e5fe4:
    // 0x1e5fe4: 0x0  nop
    ctx->pc = 0x1e5fe4u;
    // NOP
label_1e5fe8:
    // 0x1e5fe8: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e5fe8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e5fec:
    // 0x1e5fec: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e5ff0:
    // 0x1e5ff0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e5ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e5ff4:
    // 0x1e5ff4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e5ff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5ff8:
    // 0x1e5ff8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e5ffc:
    // 0x1e5ffc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e5ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e6000:
    // 0x1e6000: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1e6000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e6004:
    // 0x1e6004: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e6008:
    if (ctx->pc == 0x1E6008u) {
        ctx->pc = 0x1E600Cu;
        goto label_1e600c;
    }
    ctx->pc = 0x1E6004u;
    {
        const bool branch_taken_0x1e6004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6004) {
            ctx->pc = 0x1E6028u;
            goto label_1e6028;
        }
    }
    ctx->pc = 0x1E600Cu;
label_1e600c:
    // 0x1e600c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e600cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6010:
    // 0x1e6010: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e6010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e6014:
    // 0x1e6014: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e6018:
    if (ctx->pc == 0x1E6018u) {
        ctx->pc = 0x1E6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6014u;
        // 0x1e6018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E601Cu;
        goto label_1e601c;
    }
    ctx->pc = 0x1E6014u;
    {
        const bool branch_taken_0x1e6014 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6014u;
        // 0x1e6018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6014) {
            ctx->pc = 0x1E6050u;
            goto label_1e6050;
        }
    }
    ctx->pc = 0x1E601Cu;
label_1e601c:
    // 0x1e601c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e601cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e6020:
    // 0x1e6020: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e6024:
    if (ctx->pc == 0x1E6024u) {
        ctx->pc = 0x1E6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6020u;
        // 0x1e6024: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6028u;
        goto label_1e6028;
    }
    ctx->pc = 0x1E6020u;
    {
        const bool branch_taken_0x1e6020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6020u;
        // 0x1e6024: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6020) {
            ctx->pc = 0x1E6050u;
            goto label_1e6050;
        }
    }
    ctx->pc = 0x1E6028u;
label_1e6028:
    // 0x1e6028: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e602c:
    // 0x1e602c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e602cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6030:
    // 0x1e6030: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e6034:
    if (ctx->pc == 0x1E6034u) {
        ctx->pc = 0x1E6038u;
        goto label_1e6038;
    }
    ctx->pc = 0x1E6030u;
    {
        const bool branch_taken_0x1e6030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6030) {
            ctx->pc = 0x1E6050u;
            goto label_1e6050;
        }
    }
    ctx->pc = 0x1E6038u;
label_1e6038:
    // 0x1e6038: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e6038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e603c:
    // 0x1e603c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e603cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e6040:
    // 0x1e6040: 0x320f809  jalr        $t9
label_1e6044:
    if (ctx->pc == 0x1E6044u) {
        ctx->pc = 0x1E6048u;
        goto label_1e6048;
    }
    ctx->pc = 0x1E6040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6048u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6040u, 0x1E6048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6048u;
label_1e6048:
    // 0x1e6048: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e604c:
    if (ctx->pc == 0x1E604Cu) {
        ctx->pc = 0x1E604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6048u;
        // 0x1e604c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6050u;
        goto label_1e6050;
    }
    ctx->pc = 0x1E6048u;
    {
        const bool branch_taken_0x1e6048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6048u;
        // 0x1e604c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6048) {
            ctx->pc = 0x1E6088u;
            goto label_1e6088;
        }
    }
    ctx->pc = 0x1E6050u;
label_1e6050:
    // 0x1e6050: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e6050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e6054:
    // 0x1e6054: 0xc076800  jal         func_1DA000
label_1e6058:
    if (ctx->pc == 0x1E6058u) {
        ctx->pc = 0x1E6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6054u;
        // 0x1e6058: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E605Cu;
        goto label_1e605c;
    }
    ctx->pc = 0x1E6054u;
    SET_GPR_U32(ctx, 31, 0x1E605Cu);
    ctx->pc = 0x1E6058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6054u;
    // 0x1e6058: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E6054u, 0x1E605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E605Cu;
label_1e605c:
    // 0x1e605c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e6060:
    // 0x1e6060: 0xc076800  jal         func_1DA000
label_1e6064:
    if (ctx->pc == 0x1E6064u) {
        ctx->pc = 0x1E6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6060u;
        // 0x1e6064: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6068u;
        goto label_1e6068;
    }
    ctx->pc = 0x1E6060u;
    SET_GPR_U32(ctx, 31, 0x1E6068u);
    ctx->pc = 0x1E6064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6060u;
    // 0x1e6064: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E6060u, 0x1E6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6068u;
label_1e6068:
    // 0x1e6068: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e6068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e606c:
    // 0x1e606c: 0xc076800  jal         func_1DA000
label_1e6070:
    if (ctx->pc == 0x1E6070u) {
        ctx->pc = 0x1E6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E606Cu;
        // 0x1e6070: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6074u;
        goto label_1e6074;
    }
    ctx->pc = 0x1E606Cu;
    SET_GPR_U32(ctx, 31, 0x1E6074u);
    ctx->pc = 0x1E6070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E606Cu;
    // 0x1e6070: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E606Cu, 0x1E6074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6074u;
label_1e6074:
    // 0x1e6074: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1e6074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e6078:
    // 0x1e6078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e607c:
    // 0x1e607c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e607cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e6080:
    // 0x1e6080: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1e6080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1e6084:
    // 0x1e6084: 0x0  nop
    ctx->pc = 0x1e6084u;
    // NOP
label_1e6088:
    // 0x1e6088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e608c:
    // 0x1e608c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e608cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6090:
    // 0x1e6090: 0x3e00008  jr          $ra
label_1e6094:
    if (ctx->pc == 0x1E6094u) {
        ctx->pc = 0x1E6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6090u;
        // 0x1e6094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6098u;
        goto label_fallthrough_0x1e6090;
    }
    ctx->pc = 0x1E6090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6090u;
        // 0x1e6094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6090:
    ctx->pc = 0x1E6098u;
}
