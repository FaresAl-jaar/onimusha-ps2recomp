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

// Function: sub_00153C30
// Address: 0x153c30 - 0x153e10
void sub_00153C30_0x153c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153C30_0x153c30");
#endif

    switch (ctx->pc) {
        case 0x153c8cu: goto label_153c8c;
        case 0x153d20u: goto label_153d20;
        case 0x153d5cu: goto label_153d5c;
        case 0x153d6cu: goto label_153d6c;
        case 0x153d70u: goto label_153d70;
        case 0x153d7cu: goto label_153d7c;
        case 0x153da8u: goto label_153da8;
        case 0x153db4u: goto label_153db4;
        case 0x153de8u: goto label_153de8;
        case 0x153df4u: goto label_153df4;
        default: break;
    }

    ctx->pc = 0x153c30u;

    // 0x153c30: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x153c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x153c34: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153c3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x153c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153c44: 0xac20ee98  sw          $zero, -0x1168($at)
    ctx->pc = 0x153c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7FEE98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE98u, _value); } while (0);
    // 0x153c48: 0x3c100080  lui         $s0, 0x80
    ctx->pc = 0x153c48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)128 << 16));
    // 0x153c4c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153c50: 0xac20ee9c  sw          $zero, -0x1164($at)
    ctx->pc = 0x153c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7FEE9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE9Cu, _value); } while (0);
    // 0x153c54: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153c58: 0xac20eea0  sw          $zero, -0x1160($at)
    ctx->pc = 0x153c58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7FEEA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEEA0u, _value); } while (0);
    // 0x153c5c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153c60: 0xac22ee94  sw          $v0, -0x116C($at)
    ctx->pc = 0x153c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FEE94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE94u, _value); } while (0);
    // 0x153c64: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153c68: 0xac20eea4  sw          $zero, -0x115C($at)
    ctx->pc = 0x153c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7FEEA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEEA4u, _value); } while (0);
    // 0x153c6c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153c70: 0x8c22e860  lw          $v0, -0x17A0($at)
    ctx->pc = 0x153c70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7FE860u));
    // 0x153c74: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153c78: 0xac22ee90  sw          $v0, -0x1170($at)
    ctx->pc = 0x153c78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FEE90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE90u, _value); } while (0);
    // 0x153c7c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153c80: 0x8c24ee90  lw          $a0, -0x1170($at)
    ctx->pc = 0x153c80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7FEE90u));
    // 0x153c84: 0xc054eec  jal         func_153BB0
    ctx->pc = 0x153C84u;
    SET_GPR_U32(ctx, 31, 0x153C8Cu);
    ctx->pc = 0x153C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C84u;
    // 0x153c88: 0x2610e810  addiu       $s0, $s0, -0x17F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153BB0u, 0x153C84u, 0x153C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C8Cu;
label_153c8c:
    // 0x153c8c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x153C8Cu;
    {
        const bool branch_taken_0x153c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c8c) {
            ctx->pc = 0x153D00u;
            goto label_153d00;
        }
    }
    ctx->pc = 0x153C94u;
    // 0x153c94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x153c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x153c98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153c9c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x153C9Cu;
    {
        const bool branch_taken_0x153c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x153CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C9Cu;
        // 0x153ca0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c9c) {
            ctx->pc = 0x153CB0u;
            goto label_153cb0;
        }
    }
    ctx->pc = 0x153CA4u;
    // 0x153ca4: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x153CA4u;
    {
        const bool branch_taken_0x153ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153ca4) {
            ctx->pc = 0x153D00u;
            goto label_153d00;
        }
    }
    ctx->pc = 0x153CACu;
    // 0x153cac: 0x0  nop
    ctx->pc = 0x153cacu;
    // NOP
label_153cb0:
    // 0x153cb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153cb4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153cb8: 0xac23ee90  sw          $v1, -0x1170($at)
    ctx->pc = 0x153cb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FEE90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE90u, _value); } while (0);
    // 0x153cbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x153cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x153cc0: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153cc4: 0xac23ee94  sw          $v1, -0x116C($at)
    ctx->pc = 0x153cc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FEE94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE94u, _value); } while (0);
    // 0x153cc8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x153cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x153ccc: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153cd0: 0xac23ee98  sw          $v1, -0x1168($at)
    ctx->pc = 0x153cd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FEE98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE98u, _value); } while (0);
    // 0x153cd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x153cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x153cd8: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153cdc: 0xac23ee9c  sw          $v1, -0x1164($at)
    ctx->pc = 0x153cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FEE9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE9Cu, _value); } while (0);
    // 0x153ce0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x153ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x153ce4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153ce8: 0xac23eea0  sw          $v1, -0x1160($at)
    ctx->pc = 0x153ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FEEA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEEA0u, _value); } while (0);
    // 0x153cec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x153cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x153cf0: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153cf4: 0xac20eea4  sw          $zero, -0x115C($at)
    ctx->pc = 0x153cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7FEEA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEEA4u, _value); } while (0);
    // 0x153cf8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x153CF8u;
    {
        const bool branch_taken_0x153cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CF8u;
        // 0x153cfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cf8) {
            ctx->pc = 0x153E00u;
            goto label_153e00;
        }
    }
    ctx->pc = 0x153D00u;
label_153d00:
    // 0x153d00: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153d04: 0x8c23ee90  lw          $v1, -0x1170($at)
    ctx->pc = 0x153d04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7FEE90u));
    // 0x153d08: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x153d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x153d0c: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x153D0Cu;
    {
        const bool branch_taken_0x153d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D0Cu;
        // 0x153d10: 0x3c060041  lui         $a2, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d0c) {
            ctx->pc = 0x153DA8u;
            goto label_153da8;
        }
    }
    ctx->pc = 0x153D14u;
    // 0x153d14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x153d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153d18: 0x24c6ac80  addiu       $a2, $a2, -0x5380
    ctx->pc = 0x153d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945920));
    // 0x153d1c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x153d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_153d20:
    // 0x153d20: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x153d20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153d24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x153d28: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x153d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x153d2c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x153d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x153d30: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x153d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x153d34: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x153d34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x153d38: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x153D38u;
    {
        const bool branch_taken_0x153d38 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x153D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D38u;
        // 0x153d3c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d38) {
            ctx->pc = 0x153D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153d20;
        }
    }
    ctx->pc = 0x153D40u;
    // 0x153d40: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x153d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x153d44: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x153d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x153d48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153D48u;
    {
        const bool branch_taken_0x153d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D48u;
        // 0x153d4c: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d48) {
            ctx->pc = 0x153D60u;
            goto label_153d60;
        }
    }
    ctx->pc = 0x153D50u;
    // 0x153d50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x153d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153d54: 0xc049dd0  jal         func_127740
    ctx->pc = 0x153D54u;
    SET_GPR_U32(ctx, 31, 0x153D5Cu);
    ctx->pc = 0x153D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D54u;
    // 0x153d58: 0x24a55040  addiu       $a1, $a1, 0x5040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x153D54u, 0x153D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D5Cu;
label_153d5c:
    // 0x153d5c: 0x0  nop
    ctx->pc = 0x153d5cu;
    // NOP
label_153d60:
    // 0x153d60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153d64: 0xc049dd0  jal         func_127740
    ctx->pc = 0x153D64u;
    SET_GPR_U32(ctx, 31, 0x153D6Cu);
    ctx->pc = 0x153D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D64u;
    // 0x153d68: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x153D64u, 0x153D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D6Cu;
label_153d6c:
    // 0x153d6c: 0x0  nop
    ctx->pc = 0x153d6cu;
    // NOP
label_153d70:
    // 0x153d70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x153d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153d74: 0xc08c092  jal         func_230248
    ctx->pc = 0x153D74u;
    SET_GPR_U32(ctx, 31, 0x153D7Cu);
    ctx->pc = 0x153D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D74u;
    // 0x153d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230248u, 0x153D74u, 0x153D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D7Cu;
label_153d7c:
    // 0x153d7c: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153d80: 0xac22ee98  sw          $v0, -0x1168($at)
    ctx->pc = 0x153d80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FEE98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE98u, _value); } while (0);
    // 0x153d84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x153d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x153d88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x153d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x153d8c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x153D8Cu;
    {
        const bool branch_taken_0x153d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D8Cu;
        // 0x153d90: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d8c) {
            ctx->pc = 0x153D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153d70;
        }
    }
    ctx->pc = 0x153D94u;
    // 0x153d94: 0x8c22ee98  lw          $v0, -0x1168($at)
    ctx->pc = 0x153d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962840)));
    // 0x153d98: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x153D98u;
    {
        const bool branch_taken_0x153d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D98u;
        // 0x153d9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d98) {
            ctx->pc = 0x153DE8u;
            goto label_153de8;
        }
    }
    ctx->pc = 0x153DA0u;
    // 0x153da0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x153DA0u;
    {
        const bool branch_taken_0x153da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153da0) {
            ctx->pc = 0x153E00u;
            goto label_153e00;
        }
    }
    ctx->pc = 0x153DA8u;
label_153da8:
    // 0x153da8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x153da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x153dac: 0xc08c16c  jal         func_2305B0
    ctx->pc = 0x153DACu;
    SET_GPR_U32(ctx, 31, 0x153DB4u);
    ctx->pc = 0x153DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153DACu;
    // 0x153db0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2305B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2305B0u, 0x153DACu, 0x153DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DB4u;
label_153db4:
    // 0x153db4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153db8: 0xac22ee98  sw          $v0, -0x1168($at)
    ctx->pc = 0x153db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FEE98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE98u, _value); } while (0);
    // 0x153dbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x153dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x153dc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x153dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x153dc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x153DC4u;
    {
        const bool branch_taken_0x153dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DC4u;
        // 0x153dc8: 0x3c010080  lui         $at, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dc4) {
            ctx->pc = 0x153DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153da8;
        }
    }
    ctx->pc = 0x153DCCu;
    // 0x153dcc: 0x8c24ee98  lw          $a0, -0x1168($at)
    ctx->pc = 0x153dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962840)));
    // 0x153dd0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153DD0u;
    {
        const bool branch_taken_0x153dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DD0u;
        // 0x153dd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dd0) {
            ctx->pc = 0x153DE0u;
            goto label_153de0;
        }
    }
    ctx->pc = 0x153DD8u;
    // 0x153dd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x153DD8u;
    {
        const bool branch_taken_0x153dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153dd8) {
            ctx->pc = 0x153E00u;
            goto label_153e00;
        }
    }
    ctx->pc = 0x153DE0u;
label_153de0:
    // 0x153de0: 0xc08c6aa  jal         func_231AA8
    ctx->pc = 0x153DE0u;
    SET_GPR_U32(ctx, 31, 0x153DE8u);
    ctx->pc = 0x153DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153DE0u;
    // 0x153de4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AA8u, 0x153DE0u, 0x153DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DE8u;
label_153de8:
    // 0x153de8: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153dec: 0xc08c4a8  jal         func_2312A0
    ctx->pc = 0x153DECu;
    SET_GPR_U32(ctx, 31, 0x153DF4u);
    ctx->pc = 0x153DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153DECu;
    // 0x153df0: 0x8c24ee98  lw          $a0, -0x1168($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2312A0u, 0x153DECu, 0x153DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DF4u;
label_153df4:
    // 0x153df4: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153df8: 0xac22eea0  sw          $v0, -0x1160($at)
    ctx->pc = 0x153df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FEEA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEEA0u, _value); } while (0);
    // 0x153dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153e00:
    // 0x153e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153e08: 0x3e00008  jr          $ra
    ctx->pc = 0x153E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E08u;
        // 0x153e0c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153E10u;
}
