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

// Function: sub_00137CC8
// Address: 0x137cc8 - 0x137e2c
void sub_00137CC8_0x137cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137CC8_0x137cc8");
#endif

    switch (ctx->pc) {
        case 0x137d1cu: goto label_137d1c;
        case 0x137d34u: goto label_137d34;
        case 0x137d60u: goto label_137d60;
        case 0x137d98u: goto label_137d98;
        case 0x137db0u: goto label_137db0;
        case 0x137de0u: goto label_137de0;
        case 0x137df0u: goto label_137df0;
        case 0x137e00u: goto label_137e00;
        default: break;
    }

    ctx->pc = 0x137cc8u;

    // 0x137cc8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x137cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x137ccc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x137cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x137cd0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x137cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x137cd4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x137cd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137cd8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x137cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x137cdc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x137cdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ce0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x137ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x137ce4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x137ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ce8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137cec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x137cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x137cf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x137cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137cf4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x137cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x137cf8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x137cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x137cfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x137cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137d00: 0x28622081  slti        $v0, $v1, 0x2081
    ctx->pc = 0x137d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8321) ? 1 : 0);
    // 0x137d04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x137D04u;
    {
        const bool branch_taken_0x137d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D04u;
        // 0x137d08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d04) {
            ctx->pc = 0x137D24u;
            goto label_137d24;
        }
    }
    ctx->pc = 0x137D0Cu;
    // 0x137d0c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137d10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x137d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d14: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137D14u;
    SET_GPR_U32(ctx, 31, 0x137D1Cu);
    ctx->pc = 0x137D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D14u;
    // 0x137d18: 0x24844878  addiu       $a0, $a0, 0x4878 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137D14u, 0x137D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D1Cu;
label_137d1c:
    // 0x137d1c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x137D1Cu;
    {
        const bool branch_taken_0x137d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D1Cu;
        // 0x137d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d1c) {
            ctx->pc = 0x137E04u;
            goto label_137e04;
        }
    }
    ctx->pc = 0x137D24u;
label_137d24:
    // 0x137d24: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x137d24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x137d28: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x137d28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x137d2c: 0xc043808  jal         func_10E020
    ctx->pc = 0x137D2Cu;
    SET_GPR_U32(ctx, 31, 0x137D34u);
    ctx->pc = 0x137D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D2Cu;
    // 0x137d30: 0x8ea46700  lw          $a0, 0x6700($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x137D2Cu, 0x137D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D34u;
label_137d34:
    // 0x137d34: 0xae724400  sw          $s2, 0x4400($s3)
    ctx->pc = 0x137d34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17408), GPR_U32(ctx, 18));
    // 0x137d38: 0x26644400  addiu       $a0, $s3, 0x4400
    ctx->pc = 0x137d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17408));
    // 0x137d3c: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x137d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x137d40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x137d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137d44: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x137d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x137d48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x137d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137d4c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x137D4Cu;
    {
        const bool branch_taken_0x137d4c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x137D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D4Cu;
        // 0x137d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d4c) {
            ctx->pc = 0x137D88u;
            goto label_137d88;
        }
    }
    ctx->pc = 0x137D54u;
    // 0x137d54: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x137d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x137d58: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x137d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x137d5c: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x137d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_137d60:
    // 0x137d60: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x137d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x137d64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x137d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137d68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x137d6c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x137d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x137d70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x137d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137d74: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x137d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137d78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137D78u;
    {
        const bool branch_taken_0x137d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D78u;
        // 0x137d7c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d78) {
            ctx->pc = 0x137D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137d60;
        }
    }
    ctx->pc = 0x137D80u;
    // 0x137d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137D80u;
    {
        const bool branch_taken_0x137d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D80u;
        // 0x137d84: 0x24f04298  addiu       $s0, $a3, 0x4298 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 17048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d80) {
            ctx->pc = 0x137D90u;
            goto label_137d90;
        }
    }
    ctx->pc = 0x137D88u;
label_137d88:
    // 0x137d88: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x137d88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x137d8c: 0x24f04298  addiu       $s0, $a3, 0x4298
    ctx->pc = 0x137d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 17048));
label_137d90:
    // 0x137d90: 0xc04484a  jal         func_112128
    ctx->pc = 0x137D90u;
    SET_GPR_U32(ctx, 31, 0x137D98u);
    ctx->pc = 0x137D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D90u;
    // 0x137d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x137D90u, 0x137D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D98u;
label_137d98:
    // 0x137d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137d9c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x137D9Cu;
    {
        const bool branch_taken_0x137d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x137DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D9Cu;
        // 0x137da0: 0x26674400  addiu       $a3, $s3, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 17408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d9c) {
            ctx->pc = 0x137DB8u;
            goto label_137db8;
        }
    }
    ctx->pc = 0x137DA4u;
    // 0x137da4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137da8: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137DA8u;
    SET_GPR_U32(ctx, 31, 0x137DB0u);
    ctx->pc = 0x137DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DA8u;
    // 0x137dac: 0x248448a8  addiu       $a0, $a0, 0x48A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137DA8u, 0x137DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DB0u;
label_137db0:
    // 0x137db0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x137DB0u;
    {
        const bool branch_taken_0x137db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137db0) {
            ctx->pc = 0x137DE8u;
            goto label_137de8;
        }
    }
    ctx->pc = 0x137DB8u;
label_137db8:
    // 0x137db8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x137db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x137dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dc0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x137dc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dc4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x137dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x137dc8: 0x34a5131c  ori         $a1, $a1, 0x131C
    ctx->pc = 0x137dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4892);
    // 0x137dcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x137dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137dd0: 0x24082090  addiu       $t0, $zero, 0x2090
    ctx->pc = 0x137dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8336));
    // 0x137dd4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x137dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dd8: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137DD8u;
    SET_GPR_U32(ctx, 31, 0x137DE0u);
    ctx->pc = 0x137DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DD8u;
    // 0x137ddc: 0x240a2090  addiu       $t2, $zero, 0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137DD8u, 0x137DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DE0u;
label_137de0:
    // 0x137de0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137DE0u;
    {
        const bool branch_taken_0x137de0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x137de0) {
            ctx->pc = 0x137DF8u;
            goto label_137df8;
        }
    }
    ctx->pc = 0x137DE8u;
label_137de8:
    // 0x137de8: 0xc043800  jal         func_10E000
    ctx->pc = 0x137DE8u;
    SET_GPR_U32(ctx, 31, 0x137DF0u);
    ctx->pc = 0x137DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DE8u;
    // 0x137dec: 0x8ea46700  lw          $a0, 0x6700($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x137DE8u, 0x137DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DF0u;
label_137df0:
    // 0x137df0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137DF0u;
    {
        const bool branch_taken_0x137df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DF0u;
        // 0x137df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137df0) {
            ctx->pc = 0x137E04u;
            goto label_137e04;
        }
    }
    ctx->pc = 0x137DF8u;
label_137df8:
    // 0x137df8: 0xc043800  jal         func_10E000
    ctx->pc = 0x137DF8u;
    SET_GPR_U32(ctx, 31, 0x137E00u);
    ctx->pc = 0x137DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DF8u;
    // 0x137dfc: 0x8ea46700  lw          $a0, 0x6700($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x137DF8u, 0x137E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E00u;
label_137e00:
    // 0x137e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137e04:
    // 0x137e04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x137e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137e08: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x137e08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137e0c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x137e0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137e10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x137e10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137e14: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x137e14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137e18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x137e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137e1c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x137e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137e20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e24: 0x3e00008  jr          $ra
    ctx->pc = 0x137E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E24u;
        // 0x137e28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137E2Cu;
}
