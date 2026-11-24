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

// Function: sub_001F1F40
// Address: 0x1f1f40 - 0x1f2050
void sub_001F1F40_0x1f1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1F40_0x1f1f40");
#endif

    switch (ctx->pc) {
        case 0x1f1f9cu: goto label_1f1f9c;
        case 0x1f1ff0u: goto label_1f1ff0;
        default: break;
    }

    ctx->pc = 0x1f1f40u;

    // 0x1f1f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1f44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f1f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f1f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f1f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f54: 0x90840036  lbu         $a0, 0x36($a0)
    ctx->pc = 0x1f1f54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1f1f58: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1F1F58u;
    {
        const bool branch_taken_0x1f1f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F58u;
        // 0x1f1f5c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f58) {
            ctx->pc = 0x1F2040u;
            goto label_1f2040;
        }
    }
    ctx->pc = 0x1F1F60u;
    // 0x1f1f60: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1f60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1f64: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f1f64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f1f68: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1f1f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1f1f6c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1F6Cu;
    {
        const bool branch_taken_0x1f1f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f6c) {
            ctx->pc = 0x1F1FB8u;
            goto label_1f1fb8;
        }
    }
    ctx->pc = 0x1F1F74u;
    // 0x1f1f74: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1f1f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1f1f78: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1f1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1f1f7c: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x1f1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x1f1f80: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f1f84: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x1f1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x1f1f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f1f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f1f90: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1f1f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1f1f94: 0xc0ce66c  jal         func_3399B0
    ctx->pc = 0x1F1F94u;
    SET_GPR_U32(ctx, 31, 0x1F1F9Cu);
    ctx->pc = 0x1F1F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F94u;
    // 0x1f1f98: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3399B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3399B0u, 0x1F1F94u, 0x1F1F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F9Cu;
label_1f1f9c:
    // 0x1f1f9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1fa0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1fa4: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f1fa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f1fa8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1fac: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x1f1facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x1f1fb0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1fb4: 0xa423a3d6  sh          $v1, -0x5C2A($at)
    ctx->pc = 0x1f1fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 3));
label_1f1fb8:
    // 0x1f1fb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1fbc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1fc0: 0x9424a3d6  lhu         $a0, -0x5C2A($at)
    ctx->pc = 0x1f1fc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f1fc4: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x1f1fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x1f1fc8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1FC8u;
    {
        const bool branch_taken_0x1f1fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FC8u;
        // 0x1f1fcc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fc8) {
            ctx->pc = 0x1F2010u;
            goto label_1f2010;
        }
    }
    ctx->pc = 0x1F1FD0u;
    // 0x1f1fd0: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x1f1fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x1f1fd4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1fd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1fdc: 0x8c25a3c0  lw          $a1, -0x5C40($at)
    ctx->pc = 0x1f1fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943680)));
    // 0x1f1fe0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1f1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1f1fe4: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x1f1fe4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x1f1fe8: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x1F1FE8u;
    SET_GPR_U32(ctx, 31, 0x1F1FF0u);
    ctx->pc = 0x1F1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FE8u;
    // 0x1f1fec: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x1F1FE8u, 0x1F1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FF0u;
label_1f1ff0:
    // 0x1f1ff0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f1ff4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f1ff8: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f1ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f1ffc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2000: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x1f2000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
    // 0x1f2004: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2004u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2008: 0xa423a3d6  sh          $v1, -0x5C2A($at)
    ctx->pc = 0x1f2008u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f200c: 0x0  nop
    ctx->pc = 0x1f200cu;
    // NOP
label_1f2010:
    // 0x1f2010: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f2010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2014: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2018: 0xa2030036  sb          $v1, 0x36($s0)
    ctx->pc = 0x1f2018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f201c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f201cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2020: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f2020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1f2024: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f2024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f2028: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2028u;
    {
        const bool branch_taken_0x1f2028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2028) {
            ctx->pc = 0x1F2040u;
            goto label_1f2040;
        }
    }
    ctx->pc = 0x1F2030u;
    // 0x1f2030: 0x97838824  lhu         $v1, -0x77DC($gp)
    ctx->pc = 0x1f2030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936612)));
    // 0x1f2034: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f2034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f2038: 0xa7838824  sh          $v1, -0x77DC($gp)
    ctx->pc = 0x1f2038u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936612), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f203c: 0x0  nop
    ctx->pc = 0x1f203cu;
    // NOP
label_1f2040:
    // 0x1f2040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f2040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2048: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2048u;
        // 0x1f204c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2050u;
}
