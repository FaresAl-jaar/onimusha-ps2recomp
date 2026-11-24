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

// Function: sub_00328C30
// Address: 0x328c30 - 0x328e9c
void sub_00328C30_0x328c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328C30_0x328c30");
#endif

    switch (ctx->pc) {
        case 0x328c8cu: goto label_328c8c;
        case 0x328c9cu: goto label_328c9c;
        case 0x328cacu: goto label_328cac;
        case 0x328cb4u: goto label_328cb4;
        case 0x328cbcu: goto label_328cbc;
        case 0x328cc8u: goto label_328cc8;
        case 0x328cdcu: goto label_328cdc;
        case 0x328cecu: goto label_328cec;
        case 0x328cf8u: goto label_328cf8;
        case 0x328d04u: goto label_328d04;
        case 0x328d30u: goto label_328d30;
        case 0x328d40u: goto label_328d40;
        case 0x328d48u: goto label_328d48;
        case 0x328d64u: goto label_328d64;
        case 0x328d74u: goto label_328d74;
        case 0x328d90u: goto label_328d90;
        case 0x328da8u: goto label_328da8;
        case 0x328db4u: goto label_328db4;
        case 0x328dccu: goto label_328dcc;
        case 0x328de4u: goto label_328de4;
        case 0x328e08u: goto label_328e08;
        case 0x328e50u: goto label_328e50;
        case 0x328e64u: goto label_328e64;
        case 0x328e7cu: goto label_328e7c;
        default: break;
    }

    ctx->pc = 0x328c30u;

    // 0x328c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x328c34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x328c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328c38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x328c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x328c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328c48: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x328c48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x328c4c: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x328C4Cu;
    {
        const bool branch_taken_0x328c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x328C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C4Cu;
        // 0x328c50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c4c) {
            ctx->pc = 0x328D88u;
            goto label_328d88;
        }
    }
    ctx->pc = 0x328C54u;
    // 0x328c54: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x328C54u;
    {
        const bool branch_taken_0x328c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x328c54) {
            ctx->pc = 0x328CC0u;
            goto label_328cc0;
        }
    }
    ctx->pc = 0x328C5Cu;
    // 0x328c5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x328C5Cu;
    {
        const bool branch_taken_0x328c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c5c) {
            ctx->pc = 0x328C70u;
            goto label_328c70;
        }
    }
    ctx->pc = 0x328C64u;
    // 0x328c64: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x328C64u;
    {
        const bool branch_taken_0x328c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c64) {
            ctx->pc = 0x328E88u;
            goto label_328e88;
        }
    }
    ctx->pc = 0x328C6Cu;
    // 0x328c6c: 0x0  nop
    ctx->pc = 0x328c6cu;
    // NOP
label_328c70:
    // 0x328c70: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x328c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x328c74: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x328c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x328c78: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x328c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x328c7c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x328c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x328c80: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x328c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x328c84: 0xc05e390  jal         func_178E40
    ctx->pc = 0x328C84u;
    SET_GPR_U32(ctx, 31, 0x328C8Cu);
    ctx->pc = 0x328C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C84u;
    // 0x328c88: 0x34456000  ori         $a1, $v0, 0x6000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x328C84u, 0x328C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C8Cu;
label_328c8c:
    // 0x328c8c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x328c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x328c90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x328c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x328c94: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x328C94u;
    SET_GPR_U32(ctx, 31, 0x328C9Cu);
    ctx->pc = 0x328C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C94u;
    // 0x328c98: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x328C94u, 0x328C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C9Cu;
label_328c9c:
    // 0x328c9c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x328c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x328ca0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x328ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x328ca4: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x328CA4u;
    SET_GPR_U32(ctx, 31, 0x328CACu);
    ctx->pc = 0x328CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CA4u;
    // 0x328ca8: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x328CA4u, 0x328CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CACu;
label_328cac:
    // 0x328cac: 0xc054c88  jal         func_153220
    ctx->pc = 0x328CACu;
    SET_GPR_U32(ctx, 31, 0x328CB4u);
    ctx->pc = 0x328CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CACu;
    // 0x328cb0: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153220u, 0x328CACu, 0x328CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CB4u;
label_328cb4:
    // 0x328cb4: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x328CB4u;
    SET_GPR_U32(ctx, 31, 0x328CBCu);
    ctx->pc = 0x328CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CB4u;
    // 0x328cb8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x328CB4u, 0x328CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CBCu;
label_328cbc:
    // 0x328cbc: 0x0  nop
    ctx->pc = 0x328cbcu;
    // NOP
label_328cc0:
    // 0x328cc0: 0xc05551c  jal         func_155470
    ctx->pc = 0x328CC0u;
    SET_GPR_U32(ctx, 31, 0x328CC8u);
    ctx->pc = 0x328CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CC0u;
    // 0x328cc4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x328CC0u, 0x328CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CC8u;
label_328cc8:
    // 0x328cc8: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x328CC8u;
    {
        const bool branch_taken_0x328cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CC8u;
        // 0x328ccc: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cc8) {
            ctx->pc = 0x328E88u;
            goto label_328e88;
        }
    }
    ctx->pc = 0x328CD0u;
    // 0x328cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x328cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328cd4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x328CD4u;
    SET_GPR_U32(ctx, 31, 0x328CDCu);
    ctx->pc = 0x328CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CD4u;
    // 0x328cd8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x328CD4u, 0x328CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CDCu;
label_328cdc:
    // 0x328cdc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x328cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x328ce0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x328ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328ce4: 0xc04ca14  jal         func_132850
    ctx->pc = 0x328CE4u;
    SET_GPR_U32(ctx, 31, 0x328CECu);
    ctx->pc = 0x328CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CE4u;
    // 0x328ce8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x328CE4u, 0x328CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CECu;
label_328cec:
    // 0x328cec: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x328cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x328cf0: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x328CF0u;
    SET_GPR_U32(ctx, 31, 0x328CF8u);
    ctx->pc = 0x328CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CF0u;
    // 0x328cf4: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x328CF0u, 0x328CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CF8u;
label_328cf8:
    // 0x328cf8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x328cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x328cfc: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x328CFCu;
    SET_GPR_U32(ctx, 31, 0x328D04u);
    ctx->pc = 0x328D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CFCu;
    // 0x328d00: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF50u, 0x328CFCu, 0x328D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D04u;
label_328d04:
    // 0x328d04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x328d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x328d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328d0c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x328d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x328d10: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x328D10u;
    {
        const bool branch_taken_0x328d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x328D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D10u;
        // 0x328d14: 0x24020ec7  addiu       $v0, $zero, 0xEC7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3783));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d10) {
            ctx->pc = 0x328D1Cu;
            goto label_328d1c;
        }
    }
    ctx->pc = 0x328D18u;
    // 0x328d18: 0x24020ec6  addiu       $v0, $zero, 0xEC6
    ctx->pc = 0x328d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3782));
label_328d1c:
    // 0x328d1c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x328d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x328d20: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x328d20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x328d24: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x328d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x328d28: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x328D28u;
    SET_GPR_U32(ctx, 31, 0x328D30u);
    ctx->pc = 0x328D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D28u;
    // 0x328d2c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x328D28u, 0x328D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D30u;
label_328d30:
    // 0x328d30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x328d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x328d34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x328d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x328d38: 0xc04ca14  jal         func_132850
    ctx->pc = 0x328D38u;
    SET_GPR_U32(ctx, 31, 0x328D40u);
    ctx->pc = 0x328D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D38u;
    // 0x328d3c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x328D38u, 0x328D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D40u;
label_328d40:
    // 0x328d40: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x328D40u;
    SET_GPR_U32(ctx, 31, 0x328D48u);
    ctx->pc = 0x328D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D40u;
    // 0x328d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x328D40u, 0x328D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D48u;
label_328d48:
    // 0x328d48: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x328d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x328d4c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x328d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x328d50: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x328d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x328d54: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x328d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x328d58: 0x24c69390  addiu       $a2, $a2, -0x6C70
    ctx->pc = 0x328d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939536));
    // 0x328d5c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x328D5Cu;
    SET_GPR_U32(ctx, 31, 0x328D64u);
    ctx->pc = 0x328D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D5Cu;
    // 0x328d60: 0x24e793d0  addiu       $a3, $a3, -0x6C30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x328D5Cu, 0x328D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D64u;
label_328d64:
    // 0x328d64: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x328d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x328d68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x328d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328d6c: 0xc05ec78  jal         func_17B1E0
    ctx->pc = 0x328D6Cu;
    SET_GPR_U32(ctx, 31, 0x328D74u);
    ctx->pc = 0x328D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D6Cu;
    // 0x328d70: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1E0u, 0x328D6Cu, 0x328D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D74u;
label_328d74:
    // 0x328d74: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x328d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x328d78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x328d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328d7c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x328D7Cu;
    {
        const bool branch_taken_0x328d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D7Cu;
        // 0x328d80: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d7c) {
            ctx->pc = 0x328E88u;
            goto label_328e88;
        }
    }
    ctx->pc = 0x328D84u;
    // 0x328d84: 0x0  nop
    ctx->pc = 0x328d84u;
    // NOP
label_328d88:
    // 0x328d88: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x328D88u;
    SET_GPR_U32(ctx, 31, 0x328D90u);
    ctx->pc = 0x328D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D88u;
    // 0x328d8c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x328D88u, 0x328D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D90u;
label_328d90:
    // 0x328d90: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x328D90u;
    {
        const bool branch_taken_0x328d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D90u;
        // 0x328d94: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d90) {
            ctx->pc = 0x328E88u;
            goto label_328e88;
        }
    }
    ctx->pc = 0x328D98u;
    // 0x328d98: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x328d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x328d9c: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x328d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966424)));
    // 0x328da0: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x328DA0u;
    SET_GPR_U32(ctx, 31, 0x328DA8u);
    ctx->pc = 0x328DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DA0u;
    // 0x328da4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x328DA0u, 0x328DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DA8u;
label_328da8:
    // 0x328da8: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x328da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x328dac: 0xc055190  jal         func_154640
    ctx->pc = 0x328DACu;
    SET_GPR_U32(ctx, 31, 0x328DB4u);
    ctx->pc = 0x328DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DACu;
    // 0x328db0: 0x278582d8  addiu       $a1, $gp, -0x7D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154640u, 0x328DACu, 0x328DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DB4u;
label_328db4:
    // 0x328db4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x328db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x328db8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x328db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x328dbc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x328dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x328dc0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x328dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x328dc4: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x328DC4u;
    SET_GPR_U32(ctx, 31, 0x328DCCu);
    ctx->pc = 0x328DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DC4u;
    // 0x328dc8: 0x34460111  ori         $a2, $v0, 0x111 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)273);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x328DC4u, 0x328DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DCCu;
label_328dcc:
    // 0x328dcc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x328dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x328dd0: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x328dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x328dd4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x328DD4u;
    {
        const bool branch_taken_0x328dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DD4u;
        // 0x328dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328dd4) {
            ctx->pc = 0x328E10u;
            goto label_328e10;
        }
    }
    ctx->pc = 0x328DDCu;
    // 0x328ddc: 0xc0e0f3c  jal         func_383CF0
    ctx->pc = 0x328DDCu;
    SET_GPR_U32(ctx, 31, 0x328DE4u);
    ctx->pc = 0x328DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DDCu;
    // 0x328de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383CF0u, 0x328DDCu, 0x328DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DE4u;
label_328de4:
    // 0x328de4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x328de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x328de8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x328de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x328dec: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x328decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x328df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x328df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328df4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x328df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328df8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x328df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328dfc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x328dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x328e00: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x328E00u;
    SET_GPR_U32(ctx, 31, 0x328E08u);
    ctx->pc = 0x328E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E00u;
    // 0x328e04: 0xa200001c  sb          $zero, 0x1C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x328E00u, 0x328E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E08u;
label_328e08:
    // 0x328e08: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x328E08u;
    {
        const bool branch_taken_0x328e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e08) {
            ctx->pc = 0x328E88u;
            goto label_328e88;
        }
    }
    ctx->pc = 0x328E10u;
label_328e10:
    // 0x328e10: 0x8f858b64  lw          $a1, -0x749C($gp)
    ctx->pc = 0x328e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x328e14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x328e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x328e18: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x328E18u;
    {
        const bool branch_taken_0x328e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x328E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E18u;
        // 0x328e1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e18) {
            ctx->pc = 0x328E70u;
            goto label_328e70;
        }
    }
    ctx->pc = 0x328E20u;
    // 0x328e20: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x328E20u;
    {
        const bool branch_taken_0x328e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x328e20) {
            ctx->pc = 0x328E58u;
            goto label_328e58;
        }
    }
    ctx->pc = 0x328E28u;
    // 0x328e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328e2c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x328E2Cu;
    {
        const bool branch_taken_0x328e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x328e2c) {
            ctx->pc = 0x328E48u;
            goto label_328e48;
        }
    }
    ctx->pc = 0x328E34u;
    // 0x328e34: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x328E34u;
    {
        const bool branch_taken_0x328e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e34) {
            ctx->pc = 0x328E48u;
            goto label_328e48;
        }
    }
    ctx->pc = 0x328E3Cu;
    // 0x328e3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x328E3Cu;
    {
        const bool branch_taken_0x328e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e3c) {
            ctx->pc = 0x328E80u;
            goto label_328e80;
        }
    }
    ctx->pc = 0x328E44u;
    // 0x328e44: 0x0  nop
    ctx->pc = 0x328e44u;
    // NOP
label_328e48:
    // 0x328e48: 0xc0ca4fc  jal         func_3293F0
    ctx->pc = 0x328E48u;
    SET_GPR_U32(ctx, 31, 0x328E50u);
    ctx->pc = 0x328E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E48u;
    // 0x328e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3293F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3293F0u, 0x328E48u, 0x328E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E50u;
label_328e50:
    // 0x328e50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x328E50u;
    {
        const bool branch_taken_0x328e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e50) {
            ctx->pc = 0x328E80u;
            goto label_328e80;
        }
    }
    ctx->pc = 0x328E58u;
label_328e58:
    // 0x328e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e5c: 0xc0e0f3c  jal         func_383CF0
    ctx->pc = 0x328E5Cu;
    SET_GPR_U32(ctx, 31, 0x328E64u);
    ctx->pc = 0x328E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E5Cu;
    // 0x328e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383CF0u, 0x328E5Cu, 0x328E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E64u;
label_328e64:
    // 0x328e64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x328E64u;
    {
        const bool branch_taken_0x328e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e64) {
            ctx->pc = 0x328E80u;
            goto label_328e80;
        }
    }
    ctx->pc = 0x328E6Cu;
    // 0x328e6c: 0x0  nop
    ctx->pc = 0x328e6cu;
    // NOP
label_328e70:
    // 0x328e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328e74: 0xc0e0f3c  jal         func_383CF0
    ctx->pc = 0x328E74u;
    SET_GPR_U32(ctx, 31, 0x328E7Cu);
    ctx->pc = 0x328E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E74u;
    // 0x328e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383CF0u, 0x328E74u, 0x328E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E7Cu;
label_328e7c:
    // 0x328e7c: 0x0  nop
    ctx->pc = 0x328e7cu;
    // NOP
label_328e80:
    // 0x328e80: 0xaf808b64  sw          $zero, -0x749C($gp)
    ctx->pc = 0x328e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 0));
    // 0x328e84: 0x0  nop
    ctx->pc = 0x328e84u;
    // NOP
label_328e88:
    // 0x328e88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328e94: 0x3e00008  jr          $ra
    ctx->pc = 0x328E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E94u;
        // 0x328e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328E9Cu;
}
