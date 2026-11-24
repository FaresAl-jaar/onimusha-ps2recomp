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

// Function: sub_00243EF8
// Address: 0x243ef8 - 0x24403c
void sub_00243EF8_0x243ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243EF8_0x243ef8");
#endif

    switch (ctx->pc) {
        case 0x243f38u: goto label_243f38;
        case 0x243f90u: goto label_243f90;
        case 0x243fa0u: goto label_243fa0;
        case 0x243fe0u: goto label_243fe0;
        default: break;
    }

    ctx->pc = 0x243ef8u;

    // 0x243ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x243f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x243f08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x243f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f0c: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x243F0Cu;
    {
        const bool branch_taken_0x243f0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F0Cu;
        // 0x243f10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f0c) {
            ctx->pc = 0x244028u;
            goto label_244028;
        }
    }
    ctx->pc = 0x243F14u;
    // 0x243f14: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x243f14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x243f18: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x243f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x243f1c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x243F1Cu;
    {
        const bool branch_taken_0x243f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x243F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F1Cu;
        // 0x243f20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f1c) {
            ctx->pc = 0x243F70u;
            goto label_243f70;
        }
    }
    ctx->pc = 0x243F24u;
    // 0x243f24: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x243F24u;
    {
        const bool branch_taken_0x243f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F24u;
        // 0x243f28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f24) {
            ctx->pc = 0x243F80u;
            goto label_243f80;
        }
    }
    ctx->pc = 0x243F2Cu;
    // 0x243f2c: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x243f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x243f30: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x243f30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243f34: 0x0  nop
    ctx->pc = 0x243f34u;
    // NOP
label_243f38:
    // 0x243f38: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x243f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x243f3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x243f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x243f40: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x243f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x243f44: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x243f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x243f48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x243F48u;
    {
        const bool branch_taken_0x243f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F48u;
        // 0x243f4c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f48) {
            ctx->pc = 0x243F74u;
            goto label_243f74;
        }
    }
    ctx->pc = 0x243F50u;
    // 0x243f50: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x243f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x243f54: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x243F54u;
    {
        const bool branch_taken_0x243f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x243f54) {
            ctx->pc = 0x243F78u;
            goto label_243f78;
        }
    }
    ctx->pc = 0x243F5Cu;
    // 0x243f5c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x243F5Cu;
    {
        const bool branch_taken_0x243f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243f5c) {
            ctx->pc = 0x243F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243F5Cu;
            // 0x243f60: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243f38;
        }
    }
    ctx->pc = 0x243F64u;
    // 0x243f64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x243F64u;
    {
        const bool branch_taken_0x243f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243f64) {
            ctx->pc = 0x243F78u;
            goto label_243f78;
        }
    }
    ctx->pc = 0x243F6Cu;
    // 0x243f6c: 0x0  nop
    ctx->pc = 0x243f6cu;
    // NOP
label_243f70:
    // 0x243f70: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x243f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_243f74:
    // 0x243f74: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x243f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_243f78:
    // 0x243f78: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x243F78u;
    {
        const bool branch_taken_0x243f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F78u;
        // 0x243f7c: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f78) {
            ctx->pc = 0x243FA8u;
            goto label_243fa8;
        }
    }
    ctx->pc = 0x243F80u;
label_243f80:
    // 0x243f80: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x243f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x243f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f88: 0xc049f18  jal         func_127C60
    ctx->pc = 0x243F88u;
    SET_GPR_U32(ctx, 31, 0x243F90u);
    ctx->pc = 0x243F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F88u;
    // 0x243f8c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x243F88u, 0x243F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F90u;
label_243f90:
    // 0x243f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x243f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f98: 0xc049522  jal         func_125488
    ctx->pc = 0x243F98u;
    SET_GPR_U32(ctx, 31, 0x243FA0u);
    ctx->pc = 0x243F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F98u;
    // 0x243f9c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x243F98u, 0x243FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FA0u;
label_243fa0:
    // 0x243fa0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x243FA0u;
    {
        const bool branch_taken_0x243fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FA0u;
        // 0x243fa4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fa0) {
            ctx->pc = 0x244028u;
            goto label_244028;
        }
    }
    ctx->pc = 0x243FA8u;
label_243fa8:
    // 0x243fa8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x243fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x243fac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243fb0: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243FB0u;
    {
        const bool branch_taken_0x243fb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x243FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FB0u;
        // 0x243fb4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fb0) {
            ctx->pc = 0x243FC0u;
            goto label_243fc0;
        }
    }
    ctx->pc = 0x243FB8u;
    // 0x243fb8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x243fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x243fbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x243fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243fc0:
    // 0x243fc0: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x243fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x243fc4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x243FC4u;
    {
        const bool branch_taken_0x243fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FC4u;
        // 0x243fc8: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fc4) {
            ctx->pc = 0x244004u;
            goto label_244004;
        }
    }
    ctx->pc = 0x243FCCu;
    // 0x243fcc: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x243fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x243fd0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x243fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243fd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x243FD4u;
    {
        const bool branch_taken_0x243fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FD4u;
        // 0x243fd8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fd4) {
            ctx->pc = 0x244004u;
            goto label_244004;
        }
    }
    ctx->pc = 0x243FDCu;
    // 0x243fdc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x243fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_243fe0:
    // 0x243fe0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x243fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x243fe4: 0x28a40129  slti        $a0, $a1, 0x129
    ctx->pc = 0x243fe4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x243fe8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x243fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x243fec: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x243fecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x243ff0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243FF0u;
    {
        const bool branch_taken_0x243ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x243FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FF0u;
        // 0x243ff4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ff0) {
            ctx->pc = 0x244004u;
            goto label_244004;
        }
    }
    ctx->pc = 0x243FF8u;
    // 0x243ff8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243ffc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x243FFCu;
    {
        const bool branch_taken_0x243ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ffc) {
            ctx->pc = 0x244000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243FFCu;
            // 0x244000: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243fe0;
        }
    }
    ctx->pc = 0x244004u;
label_244004:
    // 0x244004: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x244004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x244008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24400c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x24400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x244010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24401c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x24401cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x244020: 0x8090e88  j           func_243A20
    ctx->pc = 0x244020u;
    ctx->pc = 0x244024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244020u;
    // 0x244024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243A20u;
    sub_00243A20_0x243a20(rdram, ctx, runtime); return;
    ctx->pc = 0x244028u;
label_244028:
    // 0x244028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24402c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24402cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x244030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244034: 0x3e00008  jr          $ra
    ctx->pc = 0x244034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244034u;
        // 0x244038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24403Cu;
}
