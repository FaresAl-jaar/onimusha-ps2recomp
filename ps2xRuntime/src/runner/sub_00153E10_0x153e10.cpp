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

// Function: sub_00153E10
// Address: 0x153e10 - 0x153ff8
void sub_00153E10_0x153e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153E10_0x153e10");
#endif

    switch (ctx->pc) {
        case 0x153e58u: goto label_153e58;
        case 0x153ea8u: goto label_153ea8;
        case 0x153ed0u: goto label_153ed0;
        case 0x153f38u: goto label_153f38;
        case 0x153f50u: goto label_153f50;
        case 0x153f70u: goto label_153f70;
        case 0x153f8cu: goto label_153f8c;
        case 0x153fa0u: goto label_153fa0;
        case 0x153fb4u: goto label_153fb4;
        case 0x153fc8u: goto label_153fc8;
        case 0x153fd0u: goto label_153fd0;
        default: break;
    }

    ctx->pc = 0x153e10u;

    // 0x153e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153e14: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153e20: 0x8c26eea4  lw          $a2, -0x115C($at)
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7FEEA4u));
    // 0x153e24: 0xaf8085c4  sw          $zero, -0x7A3C($gp)
    ctx->pc = 0x153e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 0));
    // 0x153e28: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153e2c: 0x8c23ee9c  lw          $v1, -0x1164($at)
    ctx->pc = 0x153e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7FEE9Cu));
    // 0x153e30: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x153e30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x153e34: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x153E34u;
    {
        const bool branch_taken_0x153e34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E34u;
        // 0x153e38: 0xaf8085c8  sw          $zero, -0x7A38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e34) {
            ctx->pc = 0x153F38u;
            goto label_153f38;
        }
    }
    ctx->pc = 0x153E3Cu;
    // 0x153e3c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x153e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x153e40: 0x2404fc19  addiu       $a0, $zero, -0x3E7
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x153e44: 0x8c27ac74  lw          $a3, -0x538C($at)
    ctx->pc = 0x153e44u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x40AC74u));
    // 0x153e48: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x153e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x153e4c: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x153E4Cu;
    {
        const bool branch_taken_0x153e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x153E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E4Cu;
        // 0x153e50: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e4c) {
            ctx->pc = 0x153E90u;
            goto label_153e90;
        }
    }
    ctx->pc = 0x153E54u;
    // 0x153e54: 0x8c25ee90  lw          $a1, -0x1170($at)
    ctx->pc = 0x153e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962832)));
label_153e58:
    // 0x153e58: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x153E58u;
    {
        const bool branch_taken_0x153e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x153e58) {
            ctx->pc = 0x153E80u;
            goto label_153e80;
        }
    }
    ctx->pc = 0x153E60u;
    // 0x153e60: 0x94e30010  lhu         $v1, 0x10($a3)
    ctx->pc = 0x153e60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x153e64: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x153E64u;
    {
        const bool branch_taken_0x153e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x153e64) {
            ctx->pc = 0x153E80u;
            goto label_153e80;
        }
    }
    ctx->pc = 0x153E6Cu;
    // 0x153e6c: 0x94e40012  lhu         $a0, 0x12($a3)
    ctx->pc = 0x153e6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x153e70: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x153e74: 0xaf8485c4  sw          $a0, -0x7A3C($gp)
    ctx->pc = 0x153e74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 4));
    // 0x153e78: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x153E78u;
    {
        const bool branch_taken_0x153e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E78u;
        // 0x153e7c: 0xaf8385c8  sw          $v1, -0x7A38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e78) {
            ctx->pc = 0x153FE8u;
            goto label_153fe8;
        }
    }
    ctx->pc = 0x153E80u;
label_153e80:
    // 0x153e80: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x153e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x153e84: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x153e88: 0x1464fff3  bne         $v1, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x153E88u;
    {
        const bool branch_taken_0x153e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x153e88) {
            ctx->pc = 0x153E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153e58;
        }
    }
    ctx->pc = 0x153E90u;
label_153e90:
    // 0x153e90: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153e94: 0x8c27ee90  lw          $a3, -0x1170($at)
    ctx->pc = 0x153e94u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7FEE90u));
    // 0x153e98: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x153e98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x153e9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x153e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ea0: 0x2508e610  addiu       $t0, $t0, -0x19F0
    ctx->pc = 0x153ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960656));
    // 0x153ea4: 0x2404fc19  addiu       $a0, $zero, -0x3E7
    ctx->pc = 0x153ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
label_153ea8:
    // 0x153ea8: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x153ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x153eac: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x153EACu;
    {
        const bool branch_taken_0x153eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x153eac) {
            ctx->pc = 0x153F08u;
            goto label_153f08;
        }
    }
    ctx->pc = 0x153EB4u;
    // 0x153eb4: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x153eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x153eb8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x153EB8u;
    {
        const bool branch_taken_0x153eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153eb8) {
            ctx->pc = 0x153F08u;
            goto label_153f08;
        }
    }
    ctx->pc = 0x153EC0u;
    // 0x153ec0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x153ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x153ec4: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x153EC4u;
    {
        const bool branch_taken_0x153ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x153ec4) {
            ctx->pc = 0x153F08u;
            goto label_153f08;
        }
    }
    ctx->pc = 0x153ECCu;
    // 0x153ecc: 0x0  nop
    ctx->pc = 0x153eccu;
    // NOP
label_153ed0:
    // 0x153ed0: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x153ED0u;
    {
        const bool branch_taken_0x153ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x153ed0) {
            ctx->pc = 0x153EF8u;
            goto label_153ef8;
        }
    }
    ctx->pc = 0x153ED8u;
    // 0x153ed8: 0x94a30010  lhu         $v1, 0x10($a1)
    ctx->pc = 0x153ed8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x153edc: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x153EDCu;
    {
        const bool branch_taken_0x153edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x153edc) {
            ctx->pc = 0x153EF8u;
            goto label_153ef8;
        }
    }
    ctx->pc = 0x153EE4u;
    // 0x153ee4: 0x94a40012  lhu         $a0, 0x12($a1)
    ctx->pc = 0x153ee4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x153ee8: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x153ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x153eec: 0xaf8485c4  sw          $a0, -0x7A3C($gp)
    ctx->pc = 0x153eecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 4));
    // 0x153ef0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x153EF0u;
    {
        const bool branch_taken_0x153ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EF0u;
        // 0x153ef4: 0xaf8385c8  sw          $v1, -0x7A38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ef0) {
            ctx->pc = 0x153FE8u;
            goto label_153fe8;
        }
    }
    ctx->pc = 0x153EF8u;
label_153ef8:
    // 0x153ef8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x153ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x153efc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x153efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x153f00: 0x1464fff3  bne         $v1, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x153F00u;
    {
        const bool branch_taken_0x153f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x153f00) {
            ctx->pc = 0x153ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153ed0;
        }
    }
    ctx->pc = 0x153F08u;
label_153f08:
    // 0x153f08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x153f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x153f0c: 0x29230020  slti        $v1, $t1, 0x20
    ctx->pc = 0x153f0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x153f10: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x153F10u;
    {
        const bool branch_taken_0x153f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F10u;
        // 0x153f14: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f10) {
            ctx->pc = 0x153EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153ea8;
        }
    }
    ctx->pc = 0x153F18u;
    // 0x153f18: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153f1c: 0xac26ee9c  sw          $a2, -0x1164($at)
    ctx->pc = 0x153f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7FEE9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE9Cu, _value); } while (0);
    // 0x153f20: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153f24: 0x8c25ee9c  lw          $a1, -0x1164($at)
    ctx->pc = 0x153f24u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7FEE9Cu));
    // 0x153f28: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153f2c: 0x8c24ee98  lw          $a0, -0x1168($at)
    ctx->pc = 0x153f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7FEE98u));
    // 0x153f30: 0xc08c432  jal         func_2310C8
    ctx->pc = 0x153F30u;
    SET_GPR_U32(ctx, 31, 0x153F38u);
    ctx->pc = 0x153F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F30u;
    // 0x153f34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310C8u, 0x153F30u, 0x153F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F38u;
label_153f38:
    // 0x153f38: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153f3c: 0x8c23eea0  lw          $v1, -0x1160($at)
    ctx->pc = 0x153f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7FEEA0u));
    // 0x153f40: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153f44: 0x8c22ee9c  lw          $v0, -0x1164($at)
    ctx->pc = 0x153f44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7FEE9Cu));
    // 0x153f48: 0xc054d28  jal         func_1534A0
    ctx->pc = 0x153F48u;
    SET_GPR_U32(ctx, 31, 0x153F50u);
    ctx->pc = 0x153F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F48u;
    // 0x153f4c: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534A0u, 0x153F48u, 0x153F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F50u;
label_153f50:
    // 0x153f50: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x153f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x153f54: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x153f54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x153f58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x153F58u;
    {
        const bool branch_taken_0x153f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f58) {
            ctx->pc = 0x153F68u;
            goto label_153f68;
        }
    }
    ctx->pc = 0x153F60u;
    // 0x153f60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x153F60u;
    {
        const bool branch_taken_0x153f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F60u;
        // 0x153f64: 0xaf9085c4  sw          $s0, -0x7A3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f60) {
            ctx->pc = 0x153F78u;
            goto label_153f78;
        }
    }
    ctx->pc = 0x153F68u;
label_153f68:
    // 0x153f68: 0xc054d28  jal         func_1534A0
    ctx->pc = 0x153F68u;
    SET_GPR_U32(ctx, 31, 0x153F70u);
    ctx->pc = 0x1534A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534A0u, 0x153F68u, 0x153F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F70u;
label_153f70:
    // 0x153f70: 0x282c2  srl         $s0, $v0, 11
    ctx->pc = 0x153f70u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x153f74: 0xaf9085c4  sw          $s0, -0x7A3C($gp)
    ctx->pc = 0x153f74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 16));
label_153f78:
    // 0x153f78: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x153F78u;
    {
        const bool branch_taken_0x153f78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x153F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F78u;
        // 0x153f7c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f78) {
            ctx->pc = 0x153F98u;
            goto label_153f98;
        }
    }
    ctx->pc = 0x153F80u;
    // 0x153f80: 0xaf8085c8  sw          $zero, -0x7A38($gp)
    ctx->pc = 0x153f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 0));
    // 0x153f84: 0xc054bf0  jal         func_152FC0
    ctx->pc = 0x153F84u;
    SET_GPR_U32(ctx, 31, 0x153F8Cu);
    ctx->pc = 0x153F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F84u;
    // 0x153f88: 0x24845050  addiu       $a0, $a0, 0x5050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FC0u, 0x153F84u, 0x153F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F8Cu;
label_153f8c:
    // 0x153f8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x153F8Cu;
    {
        const bool branch_taken_0x153f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f8c) {
            ctx->pc = 0x153FE8u;
            goto label_153fe8;
        }
    }
    ctx->pc = 0x153F94u;
    // 0x153f94: 0x0  nop
    ctx->pc = 0x153f94u;
    // NOP
label_153f98:
    // 0x153f98: 0xc054d24  jal         func_153490
    ctx->pc = 0x153F98u;
    SET_GPR_U32(ctx, 31, 0x153FA0u);
    ctx->pc = 0x153490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153490u, 0x153F98u, 0x153FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153FA0u;
label_153fa0:
    // 0x153fa0: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153fa4: 0xaf8285c8  sw          $v0, -0x7A38($gp)
    ctx->pc = 0x153fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 2));
    // 0x153fa8: 0x8c24ee98  lw          $a0, -0x1168($at)
    ctx->pc = 0x153fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7FEE98u));
    // 0x153fac: 0xc08c6aa  jal         func_231AA8
    ctx->pc = 0x153FACu;
    SET_GPR_U32(ctx, 31, 0x153FB4u);
    ctx->pc = 0x153FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153FACu;
    // 0x153fb0: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AA8u, 0x153FACu, 0x153FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153FB4u;
label_153fb4:
    // 0x153fb4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153fb8: 0x8c24ee98  lw          $a0, -0x1168($at)
    ctx->pc = 0x153fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7FEE98u));
    // 0x153fbc: 0x8f8685c8  lw          $a2, -0x7A38($gp)
    ctx->pc = 0x153fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x153fc0: 0xc08c32e  jal         func_230CB8
    ctx->pc = 0x153FC0u;
    SET_GPR_U32(ctx, 31, 0x153FC8u);
    ctx->pc = 0x153FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153FC0u;
    // 0x153fc4: 0x8f8585c4  lw          $a1, -0x7A3C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB8u, 0x153FC0u, 0x153FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153FC8u;
label_153fc8:
    // 0x153fc8: 0xc054d2c  jal         func_1534B0
    ctx->pc = 0x153FC8u;
    SET_GPR_U32(ctx, 31, 0x153FD0u);
    ctx->pc = 0x1534B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534B0u, 0x153FC8u, 0x153FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153FD0u;
label_153fd0:
    // 0x153fd0: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153fd4: 0x8f8385c4  lw          $v1, -0x7A3C($gp)
    ctx->pc = 0x153fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936004)));
    // 0x153fd8: 0x8c24ee9c  lw          $a0, -0x1164($at)
    ctx->pc = 0x153fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7FEE9Cu));
    // 0x153fdc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153fe0: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153fe4: 0xac23ee9c  sw          $v1, -0x1164($at)
    ctx->pc = 0x153fe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FEE9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE9Cu, _value); } while (0);
label_153fe8:
    // 0x153fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x153FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FF0u;
        // 0x153ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153FF8u;
}
