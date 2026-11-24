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

// Function: sub_00148CE0
// Address: 0x148ce0 - 0x148e70
void sub_00148CE0_0x148ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148CE0_0x148ce0");
#endif

    ctx->pc = 0x148ce0u;

    // 0x148ce0: 0x8f878554  lw          $a3, -0x7AAC($gp)
    ctx->pc = 0x148ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148ce4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x148ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148ce8: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x148ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x148cec: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x148cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x148cf0: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x148cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x148cf4: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x148cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x148cf8: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x148cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x148cfc: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x148cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x148d00: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x148d00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x148d04: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148d08: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148d0c: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x148d10: 0x9083002c  lbu         $v1, 0x2C($a0)
    ctx->pc = 0x148d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x148d14: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x148D14u;
    {
        const bool branch_taken_0x148d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x148d14) {
            ctx->pc = 0x148D48u;
            goto label_148d48;
        }
    }
    ctx->pc = 0x148D1Cu;
    // 0x148d1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x148D1Cu;
    {
        const bool branch_taken_0x148d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d1c) {
            ctx->pc = 0x148D30u;
            goto label_148d30;
        }
    }
    ctx->pc = 0x148D24u;
    // 0x148d24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x148D24u;
    {
        const bool branch_taken_0x148d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d24) {
            ctx->pc = 0x148D60u;
            goto label_148d60;
        }
    }
    ctx->pc = 0x148D2Cu;
    // 0x148d2c: 0x0  nop
    ctx->pc = 0x148d2cu;
    // NOP
label_148d30:
    // 0x148d30: 0x90850030  lbu         $a1, 0x30($a0)
    ctx->pc = 0x148d30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x148d34: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148d38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x148d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x148d3c: 0x34a50064  ori         $a1, $a1, 0x64
    ctx->pc = 0x148d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)100);
    // 0x148d40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148D40u;
    {
        const bool branch_taken_0x148d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148D40u;
        // 0x148d44: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148d40) {
            ctx->pc = 0x148D60u;
            goto label_148d60;
        }
    }
    ctx->pc = 0x148D48u;
label_148d48:
    // 0x148d48: 0x90850030  lbu         $a1, 0x30($a0)
    ctx->pc = 0x148d48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x148d4c: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148d50: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x148d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x148d54: 0x34a500a1  ori         $a1, $a1, 0xA1
    ctx->pc = 0x148d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)161);
    // 0x148d58: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x148d58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x148d5c: 0x0  nop
    ctx->pc = 0x148d5cu;
    // NOP
label_148d60:
    // 0x148d60: 0x8f878554  lw          $a3, -0x7AAC($gp)
    ctx->pc = 0x148d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148d64: 0x3c063780  lui         $a2, 0x3780
    ctx->pc = 0x148d64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14208 << 16));
    // 0x148d68: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x148d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x148d6c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x148d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x148d70: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x148d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x148d74: 0xa66025  or          $t4, $a1, $a2
    ctx->pc = 0x148d74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x148d78: 0x24080043  addiu       $t0, $zero, 0x43
    ctx->pc = 0x148d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x148d7c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x148d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x148d80: 0x3c057900  lui         $a1, 0x7900
    ctx->pc = 0x148d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30976 << 16));
    // 0x148d84: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x148d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x148d88: 0x34a57000  ori         $a1, $a1, 0x7000
    ctx->pc = 0x148d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28672);
    // 0x148d8c: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x148d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x148d90: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x148d90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x148d94: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x148d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x148d98: 0x8f8d8554  lw          $t5, -0x7AAC($gp)
    ctx->pc = 0x148d98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148d9c: 0x70054b89  pcpyld      $t1, $zero, $a1
    ctx->pc = 0x148d9cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x148da0: 0x34058700  ori         $a1, $zero, 0x8700
    ctx->pc = 0x148da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x148da4: 0x24030246  addiu       $v1, $zero, 0x246
    ctx->pc = 0x148da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 582));
    // 0x148da8: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x148da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x148dac: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x148dacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148db0: 0x34c79000  ori         $a3, $a2, 0x9000
    ctx->pc = 0x148db0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
    // 0x148db4: 0x3c053a00  lui         $a1, 0x3A00
    ctx->pc = 0x148db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14848 << 16));
    // 0x148db8: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x148db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x148dbc: 0x34a600c0  ori         $a2, $a1, 0xC0
    ctx->pc = 0x148dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)192);
    // 0x148dc0: 0x25aa0010  addiu       $t2, $t5, 0x10
    ctx->pc = 0x148dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x148dc4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x148dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148dc8: 0xaf8a8554  sw          $t2, -0x7AAC($gp)
    ctx->pc = 0x148dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 10));
    // 0x148dcc: 0x70073b89  pcpyld      $a3, $zero, $a3
    ctx->pc = 0x148dccu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x148dd0: 0x8f8a8554  lw          $t2, -0x7AAC($gp)
    ctx->pc = 0x148dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148dd4: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x148dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x148dd8: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x148dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x148ddc: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x148ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    // 0x148de0: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148de4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148de8: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148de8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x148dec: 0x9083002f  lbu         $v1, 0x2F($a0)
    ctx->pc = 0x148decu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 47)));
    // 0x148df0: 0x908d002d  lbu         $t5, 0x2D($a0)
    ctx->pc = 0x148df0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x148df4: 0x908a002e  lbu         $t2, 0x2E($a0)
    ctx->pc = 0x148df4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x148df8: 0x8f8e8554  lw          $t6, -0x7AAC($gp)
    ctx->pc = 0x148df8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148dfc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x148dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x148e00: 0xa2238  dsll        $a0, $t2, 8
    ctx->pc = 0x148e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << 8);
    // 0x148e04: 0x1a42025  or          $a0, $t5, $a0
    ctx->pc = 0x148e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x148e08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x148e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x148e0c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x148e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x148e10: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x148e10u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x148e14: 0xfdcb0008  sd          $t3, 0x8($t6)
    ctx->pc = 0x148e14u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
    // 0x148e18: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148e1c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148e20: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x148e24: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148e28: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x148e28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x148e2c: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x148e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x148e30: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148e34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148e38: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x148e3c: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148e40: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x148e40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x148e44: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x148e44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x148e48: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148e4c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148e50: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x148e54: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148e58: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x148e58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x148e5c: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x148e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x148e60: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148e64: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148e68: 0x3e00008  jr          $ra
    ctx->pc = 0x148E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E68u;
        // 0x148e6c: 0xaf838554  sw          $v1, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148E70u;
}
