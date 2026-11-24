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

// Function: sub_00148E70
// Address: 0x148e70 - 0x1490ec
void sub_00148E70_0x148e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148E70_0x148e70");
#endif

    ctx->pc = 0x148e70u;

    // 0x148e70: 0x8f8f8554  lw          $t7, -0x7AAC($gp)
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148e74: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x148e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x148e78: 0x34690080  ori         $t1, $v1, 0x80
    ctx->pc = 0x148e78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x148e7c: 0x2408004d  addiu       $t0, $zero, 0x4D
    ctx->pc = 0x148e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x148e80: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x148e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x148e84: 0x3c0e0003  lui         $t6, 0x3
    ctx->pc = 0x148e84u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3 << 16));
    // 0x148e88: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x148e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x148e8c: 0x240d0048  addiu       $t5, $zero, 0x48
    ctx->pc = 0x148e8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x148e90: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x148e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x148e94: 0x240b0019  addiu       $t3, $zero, 0x19
    ctx->pc = 0x148e94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x148e98: 0x676025  or          $t4, $v1, $a3
    ctx->pc = 0x148e98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x148e9c: 0x240a0316  addiu       $t2, $zero, 0x316
    ctx->pc = 0x148e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x148ea0: 0xfde90000  sd          $t1, 0x0($t7)
    ctx->pc = 0x148ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 9));
    // 0x148ea4: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x148ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x148ea8: 0xfde80008  sd          $t0, 0x8($t7)
    ctx->pc = 0x148ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 8));
    // 0x148eac: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x148eacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x148eb0: 0x8f8f8554  lw          $t7, -0x7AAC($gp)
    ctx->pc = 0x148eb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148eb4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x148eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x148eb8: 0x3468c00a  ori         $t0, $v1, 0xC00A
    ctx->pc = 0x148eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x148ebc: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x148ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x148ec0: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x148ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x148ec4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x148ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x148ec8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x148ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x148ecc: 0x25e90010  addiu       $t1, $t7, 0x10
    ctx->pc = 0x148eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x148ed0: 0xaf898554  sw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 9));
    // 0x148ed4: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148ed8: 0xfd2e0000  sd          $t6, 0x0($t1)
    ctx->pc = 0x148ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 14));
    // 0x148edc: 0xfd2d0008  sd          $t5, 0x8($t1)
    ctx->pc = 0x148edcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 13));
    // 0x148ee0: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148ee4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x148ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x148ee8: 0xaf898554  sw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 9));
    // 0x148eec: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148eecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148ef0: 0xfd2c0000  sd          $t4, 0x0($t1)
    ctx->pc = 0x148ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 12));
    // 0x148ef4: 0xfd2b0008  sd          $t3, 0x8($t1)
    ctx->pc = 0x148ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 11));
    // 0x148ef8: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148efc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x148efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x148f00: 0xaf898554  sw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 9));
    // 0x148f04: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148f04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f08: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x148f08u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x148f0c: 0xfd200008  sd          $zero, 0x8($t1)
    ctx->pc = 0x148f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 0));
    // 0x148f10: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148f10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f14: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x148f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x148f18: 0xaf898554  sw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 9));
    // 0x148f1c: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f20: 0xfd280000  sd          $t0, 0x0($t1)
    ctx->pc = 0x148f20u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x148f24: 0xfd270008  sd          $a3, 0x8($t1)
    ctx->pc = 0x148f24u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x148f28: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148f28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f2c: 0xdc27f238  ld          $a3, -0xDC8($at)
    ctx->pc = 0x148f2cu;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x81F238u));
    // 0x148f30: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x148f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x148f34: 0xaf888554  sw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148f34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 8));
    // 0x148f38: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148f38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f3c: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x148f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x148f40: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x148f40u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x148f44: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f48: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148f4c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x148F4Cu;
    {
        const bool branch_taken_0x148f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F4Cu;
        // 0x148f50: 0xaf838554  sw          $v1, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f4c) {
            ctx->pc = 0x148F78u;
            goto label_148f78;
        }
    }
    ctx->pc = 0x148F54u;
    // 0x148f54: 0x8f878554  lw          $a3, -0x7AAC($gp)
    ctx->pc = 0x148f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f58: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x148f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x148f5c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x148f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x148f60: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x148f60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x148f64: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x148f64u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x148f68: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f6c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148f70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x148F70u;
    {
        const bool branch_taken_0x148f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F70u;
        // 0x148f74: 0xaf838554  sw          $v1, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f70) {
            ctx->pc = 0x148F98u;
            goto label_148f98;
        }
    }
    ctx->pc = 0x148F78u;
label_148f78:
    // 0x148f78: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f7c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x148f80: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x148f80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x148f84: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x148f84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x148f88: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148f8c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148f90: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148f90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x148f94: 0x0  nop
    ctx->pc = 0x148f94u;
    // NOP
label_148f98:
    // 0x148f98: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x148f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x148f9c: 0x24640700  addiu       $a0, $v1, 0x700
    ctx->pc = 0x148f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x148fa0: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148fa4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x148fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x148fa8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x148fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x148fac: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x148facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x148fb0: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x148fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x148fb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x148fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x148fb8: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x148fb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148fbc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x148fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x148fc0: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x148fc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x148fc4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x148fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x148fc8: 0xfd200000  sd          $zero, 0x0($t1)
    ctx->pc = 0x148fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 0));
    // 0x148fcc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x148fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x148fd0: 0xfd280008  sd          $t0, 0x8($t1)
    ctx->pc = 0x148fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 8));
    // 0x148fd4: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x148fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x148fd8: 0x8f898554  lw          $t1, -0x7AAC($gp)
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148fdc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x148fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x148fe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148fe4: 0x34658080  ori         $a1, $v1, 0x8080
    ctx->pc = 0x148fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x148fe8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x148fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x148fec: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x148fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x148ff0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x148ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x148ff4: 0x346e0008  ori         $t6, $v1, 0x8
    ctx->pc = 0x148ff4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x148ff8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x148ff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x148ffc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x148ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x149000: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x149000u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x149004: 0x3c067900  lui         $a2, 0x7900
    ctx->pc = 0x149004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30976 << 16));
    // 0x149008: 0x34c67000  ori         $a2, $a2, 0x7000
    ctx->pc = 0x149008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28672);
    // 0x14900c: 0xca4025  or          $t0, $a2, $t2
    ctx->pc = 0x14900cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x149010: 0x70086b89  pcpyld      $t5, $zero, $t0
    ctx->pc = 0x149010u;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x149014: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x149014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x149018: 0x3c060e08  lui         $a2, 0xE08
    ctx->pc = 0x149018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3592 << 16));
    // 0x14901c: 0xaf888554  sw          $t0, -0x7AAC($gp)
    ctx->pc = 0x14901cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 8));
    // 0x149020: 0x34cb2008  ori         $t3, $a2, 0x2008
    ctx->pc = 0x149020u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8200);
    // 0x149024: 0x8f8f8554  lw          $t7, -0x7AAC($gp)
    ctx->pc = 0x149024u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149028: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x149028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x14902c: 0x34c9020b  ori         $t1, $a2, 0x20B
    ctx->pc = 0x14902cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)523);
    // 0x149030: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x149030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x149034: 0x700a3389  pcpyld      $a2, $zero, $t2
    ctx->pc = 0x149034u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x149038: 0xe65025  or          $t2, $a3, $a2
    ctx->pc = 0x149038u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x14903c: 0x24070061  addiu       $a3, $zero, 0x61
    ctx->pc = 0x14903cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x149040: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x149040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x149044: 0xfde50000  sd          $a1, 0x0($t7)
    ctx->pc = 0x149044u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 5));
    // 0x149048: 0xfde40008  sd          $a0, 0x8($t7)
    ctx->pc = 0x149048u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 4));
    // 0x14904c: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x14904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149050: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x149050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x149054: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x149058: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14905c: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x14905cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x149060: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x149060u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x149064: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149068: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x149068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14906c: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x14906cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x149070: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149074: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x149074u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x149078: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x149078u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x14907c: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x14907cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149080: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x149080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x149084: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x149088: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14908c: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x14908cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x149090: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x149090u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x149094: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x149094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149098: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x149098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14909c: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x14909cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x1490a0: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1490a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1490a4: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x1490a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x1490a8: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x1490a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x1490ac: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1490acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1490b0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1490b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1490b4: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1490b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x1490b8: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1490b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1490bc: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x1490bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x1490c0: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x1490c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x1490c4: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1490c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1490c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1490c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1490cc: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1490ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x1490d0: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1490d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1490d4: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x1490d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x1490d8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1490d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1490dc: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1490dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1490e0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1490e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1490e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1490E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490E4u;
        // 0x1490e8: 0xaf838554  sw          $v1, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1490E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1490ECu;
}
