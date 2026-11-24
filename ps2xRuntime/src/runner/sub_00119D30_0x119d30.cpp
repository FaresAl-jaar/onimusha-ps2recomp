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

// Function: sub_00119D30
// Address: 0x119d30 - 0x119e5c
void sub_00119D30_0x119d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119D30_0x119d30");
#endif

    switch (ctx->pc) {
        case 0x119d78u: goto label_119d78;
        case 0x119da4u: goto label_119da4;
        case 0x119db8u: goto label_119db8;
        case 0x119de4u: goto label_119de4;
        case 0x119e0cu: goto label_119e0c;
        case 0x119e14u: goto label_119e14;
        case 0x119e24u: goto label_119e24;
        default: break;
    }

    ctx->pc = 0x119d30u;

    // 0x119d30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x119d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x119d34: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x119d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x119d38: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x119d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119d3c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x119d3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d40: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119d44: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x119d44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x119d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x119d4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x119d4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d50: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119d54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119d58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119d5c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x119D5Cu;
    {
        const bool branch_taken_0x119d5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x119D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D5Cu;
        // 0x119d60: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d5c) {
            ctx->pc = 0x119D70u;
            goto label_119d70;
        }
    }
    ctx->pc = 0x119D64u;
    // 0x119d64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119d68: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x119D68u;
    {
        const bool branch_taken_0x119d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D68u;
        // 0x119d6c: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d68) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119D70u;
label_119d70:
    // 0x119d70: 0xc046028  jal         func_1180A0
    ctx->pc = 0x119D70u;
    SET_GPR_U32(ctx, 31, 0x119D78u);
    ctx->pc = 0x119D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D70u;
    // 0x119d74: 0x3c120069  lui         $s2, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x119D70u, 0x119D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D78u;
label_119d78:
    // 0x119d78: 0x8e503f40  lw          $s0, 0x3F40($s2)
    ctx->pc = 0x119d78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16192)));
    // 0x119d7c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119D7Cu;
    {
        const bool branch_taken_0x119d7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D7Cu;
        // 0x119d80: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d7c) {
            ctx->pc = 0x119D8Cu;
            goto label_119d8c;
        }
    }
    ctx->pc = 0x119D84u;
    // 0x119d84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x119d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119d88: 0xae423f40  sw          $v0, 0x3F40($s2)
    ctx->pc = 0x119d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16192), GPR_U32(ctx, 2));
label_119d8c:
    // 0x119d8c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119D8Cu;
    {
        const bool branch_taken_0x119d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x119d8c) {
            ctx->pc = 0x119DB0u;
            goto label_119db0;
        }
    }
    ctx->pc = 0x119D94u;
    // 0x119d94: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x119D94u;
    {
        const bool branch_taken_0x119d94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x119d94) {
            ctx->pc = 0x119DA4u;
            goto label_119da4;
        }
    }
    ctx->pc = 0x119D9Cu;
    // 0x119d9c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119D9Cu;
    SET_GPR_U32(ctx, 31, 0x119DA4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119D9Cu, 0x119DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DA4u;
label_119da4:
    // 0x119da4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119da8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x119DA8u;
    {
        const bool branch_taken_0x119da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DA8u;
        // 0x119dac: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119da8) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119DB0u;
label_119db0:
    // 0x119db0: 0xc0464ce  jal         func_119338
    ctx->pc = 0x119DB0u;
    SET_GPR_U32(ctx, 31, 0x119DB8u);
    ctx->pc = 0x119338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119338u, 0x119DB0u, 0x119DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DB8u;
label_119db8:
    // 0x119db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dbc: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x119DBCu;
    {
        const bool branch_taken_0x119dbc = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x119dbc) {
            ctx->pc = 0x119DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119DBCu;
            // 0x119dc0: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119DECu;
            goto label_119dec;
        }
    }
    ctx->pc = 0x119DC4u;
    // 0x119dc4: 0x8e423f40  lw          $v0, 0x3F40($s2)
    ctx->pc = 0x119dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16192)));
    // 0x119dc8: 0xae503f40  sw          $s0, 0x3F40($s2)
    ctx->pc = 0x119dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16192), GPR_U32(ctx, 16));
    // 0x119dcc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x119dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x119dd0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x119dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x119dd4: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x119DD4u;
    {
        const bool branch_taken_0x119dd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DD4u;
        // 0x119dd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119dd4) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119DDCu;
    // 0x119ddc: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119DDCu;
    SET_GPR_U32(ctx, 31, 0x119DE4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119DDCu, 0x119DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DE4u;
label_119de4:
    // 0x119de4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x119DE4u;
    {
        const bool branch_taken_0x119de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DE4u;
        // 0x119de8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119de4) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119DECu;
label_119dec:
    // 0x119dec: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x119decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x119df0: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x119df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x119df4: 0x24c69cd0  addiu       $a2, $a2, -0x6330
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941904));
    // 0x119df8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x119df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x119dfc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x119dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e04: 0xc046696  jal         func_119A58
    ctx->pc = 0x119E04u;
    SET_GPR_U32(ctx, 31, 0x119E0Cu);
    ctx->pc = 0x119E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E04u;
    // 0x119e08: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A58u, 0x119E04u, 0x119E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E0Cu;
label_119e0c:
    // 0x119e0c: 0xc046574  jal         func_1195D0
    ctx->pc = 0x119E0Cu;
    SET_GPR_U32(ctx, 31, 0x119E14u);
    ctx->pc = 0x119E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E0Cu;
    // 0x119e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1195D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1195D0u, 0x119E0Cu, 0x119E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E14u;
label_119e14:
    // 0x119e14: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x119E14u;
    {
        const bool branch_taken_0x119e14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E14u;
        // 0x119e18: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e14) {
            ctx->pc = 0x119E28u;
            goto label_119e28;
        }
    }
    ctx->pc = 0x119E1Cu;
    // 0x119e1c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119E1Cu;
    SET_GPR_U32(ctx, 31, 0x119E24u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119E1Cu, 0x119E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E24u;
label_119e24:
    // 0x119e24: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x119e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_119e28:
    // 0x119e28: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x119e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x119e2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119e30: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x119e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_119e34:
    // 0x119e34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x119e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119e38: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x119e38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119e3c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119e3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119e40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119e44: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119e44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119e48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119e4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119e54: 0x3e00008  jr          $ra
    ctx->pc = 0x119E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E54u;
        // 0x119e58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119E5Cu;
}
