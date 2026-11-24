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

// Function: sub_003EFD00
// Address: 0x3efd00 - 0x3f0050
void sub_003EFD00_0x3efd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFD00_0x3efd00");
#endif

    switch (ctx->pc) {
        case 0x3efd14u: goto label_3efd14;
        case 0x3efd2cu: goto label_3efd2c;
        case 0x3efddcu: goto label_3efddc;
        case 0x3efdecu: goto label_3efdec;
        case 0x3efe34u: goto label_3efe34;
        case 0x3efe6cu: goto label_3efe6c;
        case 0x3efea4u: goto label_3efea4;
        case 0x3efedcu: goto label_3efedc;
        case 0x3eff14u: goto label_3eff14;
        case 0x3eff4cu: goto label_3eff4c;
        case 0x3eff84u: goto label_3eff84;
        case 0x3effbcu: goto label_3effbc;
        case 0x3efffcu: goto label_3efffc;
        case 0x3f0000u: goto label_3f0000;
        case 0x3f0034u: goto label_3f0034;
        case 0x3f0040u: goto label_3f0040;
        default: break;
    }

    ctx->pc = 0x3efd00u;

    // 0x3efd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3efd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3efd04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3efd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3efd08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3efd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3efd0c: 0xc0fbe58  jal         func_3EF960
    ctx->pc = 0x3EFD0Cu;
    SET_GPR_U32(ctx, 31, 0x3EFD14u);
    ctx->pc = 0x3EFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFD0Cu;
    // 0x3efd10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF960u, 0x3EFD0Cu, 0x3EFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFD14u;
label_3efd14:
    // 0x3efd14: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x3efd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3efd18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3efd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3efd1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFD1Cu;
    {
        const bool branch_taken_0x3efd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD1Cu;
        // 0x3efd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd1c) {
            ctx->pc = 0x3EFD30u;
            goto label_3efd30;
        }
    }
    ctx->pc = 0x3EFD24u;
    // 0x3efd24: 0xc0fbecc  jal         func_3EFB30
    ctx->pc = 0x3EFD24u;
    SET_GPR_U32(ctx, 31, 0x3EFD2Cu);
    ctx->pc = 0x3EFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EFB30u, 0x3EFD24u, 0x3EFD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFD2Cu;
label_3efd2c:
    // 0x3efd2c: 0x0  nop
    ctx->pc = 0x3efd2cu;
    // NOP
label_3efd30:
    // 0x3efd30: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3efd30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3efd34: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x3efd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3efd38: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3EFD38u;
    {
        const bool branch_taken_0x3efd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD38u;
        // 0x3efd3c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd38) {
            ctx->pc = 0x3F0008u;
            goto label_3f0008;
        }
    }
    ctx->pc = 0x3EFD40u;
    // 0x3efd40: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3EFD40u;
    {
        const bool branch_taken_0x3efd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3efd40) {
            ctx->pc = 0x3EFFC8u;
            goto label_3effc8;
        }
    }
    ctx->pc = 0x3EFD48u;
    // 0x3efd48: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x3efd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3efd4c: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3EFD4Cu;
    {
        const bool branch_taken_0x3efd4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD4Cu;
        // 0x3efd50: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd4c) {
            ctx->pc = 0x3EFF90u;
            goto label_3eff90;
        }
    }
    ctx->pc = 0x3EFD54u;
    // 0x3efd54: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x3EFD54u;
    {
        const bool branch_taken_0x3efd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3efd54) {
            ctx->pc = 0x3EFF58u;
            goto label_3eff58;
        }
    }
    ctx->pc = 0x3EFD5Cu;
    // 0x3efd5c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3efd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3efd60: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x3EFD60u;
    {
        const bool branch_taken_0x3efd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD60u;
        // 0x3efd64: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd60) {
            ctx->pc = 0x3EFF20u;
            goto label_3eff20;
        }
    }
    ctx->pc = 0x3EFD68u;
    // 0x3efd68: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3EFD68u;
    {
        const bool branch_taken_0x3efd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3efd68) {
            ctx->pc = 0x3EFEE8u;
            goto label_3efee8;
        }
    }
    ctx->pc = 0x3EFD70u;
    // 0x3efd70: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3efd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3efd74: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3EFD74u;
    {
        const bool branch_taken_0x3efd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD74u;
        // 0x3efd78: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd74) {
            ctx->pc = 0x3EFEB0u;
            goto label_3efeb0;
        }
    }
    ctx->pc = 0x3EFD7Cu;
    // 0x3efd7c: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3EFD7Cu;
    {
        const bool branch_taken_0x3efd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3efd7c) {
            ctx->pc = 0x3EFE78u;
            goto label_3efe78;
        }
    }
    ctx->pc = 0x3EFD84u;
    // 0x3efd84: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x3efd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3efd88: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3EFD88u;
    {
        const bool branch_taken_0x3efd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD88u;
        // 0x3efd8c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd88) {
            ctx->pc = 0x3EFE40u;
            goto label_3efe40;
        }
    }
    ctx->pc = 0x3EFD90u;
    // 0x3efd90: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3EFD90u;
    {
        const bool branch_taken_0x3efd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3efd90) {
            ctx->pc = 0x3EFE08u;
            goto label_3efe08;
        }
    }
    ctx->pc = 0x3EFD98u;
    // 0x3efd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3efd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3efd9c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EFD9Cu;
    {
        const bool branch_taken_0x3efd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3efd9c) {
            ctx->pc = 0x3EFDB0u;
            goto label_3efdb0;
        }
    }
    ctx->pc = 0x3EFDA4u;
    // 0x3efda4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x3EFDA4u;
    {
        const bool branch_taken_0x3efda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efda4) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFDACu;
    // 0x3efdac: 0x0  nop
    ctx->pc = 0x3efdacu;
    // NOP
label_3efdb0:
    // 0x3efdb0: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3efdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3efdb4: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3efdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3efdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efdbc: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3efdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3efdc0: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3efdc4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efdc8: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3efdcc: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3efdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3efdd0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efdd4: 0xc09759c  jal         func_25D670
    ctx->pc = 0x3EFDD4u;
    SET_GPR_U32(ctx, 31, 0x3EFDDCu);
    ctx->pc = 0x3EFDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFDD4u;
    // 0x3efdd8: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D670u, 0x3EFDD4u, 0x3EFDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFDDCu;
label_3efddc:
    // 0x3efddc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EFDDCu;
    {
        const bool branch_taken_0x3efddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDDCu;
        // 0x3efde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efddc) {
            ctx->pc = 0x3EFDF8u;
            goto label_3efdf8;
        }
    }
    ctx->pc = 0x3EFDE4u;
    // 0x3efde4: 0xc0fbda0  jal         func_3EF680
    ctx->pc = 0x3EFDE4u;
    SET_GPR_U32(ctx, 31, 0x3EFDECu);
    ctx->pc = 0x3EF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF680u, 0x3EFDE4u, 0x3EFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFDECu;
label_3efdec:
    // 0x3efdec: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3EFDECu;
    {
        const bool branch_taken_0x3efdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efdec) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFDF4u;
    // 0x3efdf4: 0x0  nop
    ctx->pc = 0x3efdf4u;
    // NOP
label_3efdf8:
    // 0x3efdf8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3efdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3efdfc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efe00: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x3EFE00u;
    {
        const bool branch_taken_0x3efe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFE00u;
        // 0x3efe04: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe00) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFE08u;
label_3efe08:
    // 0x3efe08: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3efe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3efe0c: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3efe0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3efe10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efe14: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3efe14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3efe18: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3efe1c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efe20: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efe20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3efe24: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3efe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3efe28: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efe2c: 0xc0fb7d8  jal         func_3EDF60
    ctx->pc = 0x3EFE2Cu;
    SET_GPR_U32(ctx, 31, 0x3EFE34u);
    ctx->pc = 0x3EFE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFE2Cu;
    // 0x3efe30: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDF60u, 0x3EFE2Cu, 0x3EFE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFE34u;
label_3efe34:
    // 0x3efe34: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x3EFE34u;
    {
        const bool branch_taken_0x3efe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efe34) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFE3Cu;
    // 0x3efe3c: 0x0  nop
    ctx->pc = 0x3efe3cu;
    // NOP
label_3efe40:
    // 0x3efe40: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3efe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3efe44: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3efe44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3efe48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efe4c: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3efe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3efe50: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3efe54: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efe58: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3efe5c: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3efe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3efe60: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efe64: 0xc0fb824  jal         func_3EE090
    ctx->pc = 0x3EFE64u;
    SET_GPR_U32(ctx, 31, 0x3EFE6Cu);
    ctx->pc = 0x3EFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFE64u;
    // 0x3efe68: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE090u, 0x3EFE64u, 0x3EFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFE6Cu;
label_3efe6c:
    // 0x3efe6c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3EFE6Cu;
    {
        const bool branch_taken_0x3efe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efe6c) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFE74u;
    // 0x3efe74: 0x0  nop
    ctx->pc = 0x3efe74u;
    // NOP
label_3efe78:
    // 0x3efe78: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3efe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3efe7c: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3efe7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3efe80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efe84: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3efe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3efe88: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3efe8c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efe90: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efe90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3efe94: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3efe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3efe98: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efe9c: 0xc0fb86c  jal         func_3EE1B0
    ctx->pc = 0x3EFE9Cu;
    SET_GPR_U32(ctx, 31, 0x3EFEA4u);
    ctx->pc = 0x3EFEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFE9Cu;
    // 0x3efea0: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE1B0u, 0x3EFE9Cu, 0x3EFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFEA4u;
label_3efea4:
    // 0x3efea4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3EFEA4u;
    {
        const bool branch_taken_0x3efea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efea4) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFEACu;
    // 0x3efeac: 0x0  nop
    ctx->pc = 0x3efeacu;
    // NOP
label_3efeb0:
    // 0x3efeb0: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3efeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3efeb4: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3efeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3efeb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efebc: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3efebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3efec0: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3efec4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efec8: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3efecc: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3efeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3efed0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3efed4: 0xc0fb898  jal         func_3EE260
    ctx->pc = 0x3EFED4u;
    SET_GPR_U32(ctx, 31, 0x3EFEDCu);
    ctx->pc = 0x3EFED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFED4u;
    // 0x3efed8: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE260u, 0x3EFED4u, 0x3EFEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFEDCu;
label_3efedc:
    // 0x3efedc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3EFEDCu;
    {
        const bool branch_taken_0x3efedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efedc) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFEE4u;
    // 0x3efee4: 0x0  nop
    ctx->pc = 0x3efee4u;
    // NOP
label_3efee8:
    // 0x3efee8: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3efee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3efeec: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3efeecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3efef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efef4: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3efef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3efef8: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3efef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3efefc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3efefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3eff00: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3eff00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3eff04: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3eff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3eff08: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3eff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3eff0c: 0xc0fb9e4  jal         func_3EE790
    ctx->pc = 0x3EFF0Cu;
    SET_GPR_U32(ctx, 31, 0x3EFF14u);
    ctx->pc = 0x3EFF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFF0Cu;
    // 0x3eff10: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE790u, 0x3EFF0Cu, 0x3EFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFF14u;
label_3eff14:
    // 0x3eff14: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3EFF14u;
    {
        const bool branch_taken_0x3eff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eff14) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFF1Cu;
    // 0x3eff1c: 0x0  nop
    ctx->pc = 0x3eff1cu;
    // NOP
label_3eff20:
    // 0x3eff20: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3eff20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3eff24: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3eff24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3eff28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eff2c: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3eff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3eff30: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3eff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3eff34: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3eff34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3eff38: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3eff38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3eff3c: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3eff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3eff40: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3eff40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3eff44: 0xc0fba1c  jal         func_3EE870
    ctx->pc = 0x3EFF44u;
    SET_GPR_U32(ctx, 31, 0x3EFF4Cu);
    ctx->pc = 0x3EFF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFF44u;
    // 0x3eff48: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE870u, 0x3EFF44u, 0x3EFF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFF4Cu;
label_3eff4c:
    // 0x3eff4c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3EFF4Cu;
    {
        const bool branch_taken_0x3eff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eff4c) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFF54u;
    // 0x3eff54: 0x0  nop
    ctx->pc = 0x3eff54u;
    // NOP
label_3eff58:
    // 0x3eff58: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3eff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3eff5c: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3eff5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3eff60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eff64: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3eff64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3eff68: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3eff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3eff6c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3eff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3eff70: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3eff70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3eff74: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3eff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3eff78: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3eff78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3eff7c: 0xc0fbb28  jal         func_3EECA0
    ctx->pc = 0x3EFF7Cu;
    SET_GPR_U32(ctx, 31, 0x3EFF84u);
    ctx->pc = 0x3EFF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFF7Cu;
    // 0x3eff80: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EECA0u, 0x3EFF7Cu, 0x3EFF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFF84u;
label_3eff84:
    // 0x3eff84: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3EFF84u;
    {
        const bool branch_taken_0x3eff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eff84) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFF8Cu;
    // 0x3eff8c: 0x0  nop
    ctx->pc = 0x3eff8cu;
    // NOP
label_3eff90:
    // 0x3eff90: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x3eff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x3eff94: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3eff94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3eff98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eff9c: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3eff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3effa0: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3effa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3effa4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3effa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3effa8: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3effa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3effac: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3effacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3effb0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3effb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3effb4: 0xc0fbc24  jal         func_3EF090
    ctx->pc = 0x3EFFB4u;
    SET_GPR_U32(ctx, 31, 0x3EFFBCu);
    ctx->pc = 0x3EFFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFFB4u;
    // 0x3effb8: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF090u, 0x3EFFB4u, 0x3EFFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFFBCu;
label_3effbc:
    // 0x3effbc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3EFFBCu;
    {
        const bool branch_taken_0x3effbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3effbc) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
    ctx->pc = 0x3EFFC4u;
    // 0x3effc4: 0x0  nop
    ctx->pc = 0x3effc4u;
    // NOP
label_3effc8:
    // 0x3effc8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3effc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3effcc: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3effccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3effd0: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x3effd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x3effd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3effd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3effd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3effd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3effdc: 0xae0207b8  sw          $v0, 0x7B8($s0)
    ctx->pc = 0x3effdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 2));
    // 0x3effe0: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3effe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3effe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3effe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3effe8: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3effe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3effec: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3effecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3efff0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3efff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3efff4: 0xc0fbd34  jal         func_3EF4D0
    ctx->pc = 0x3EFFF4u;
    SET_GPR_U32(ctx, 31, 0x3EFFFCu);
    ctx->pc = 0x3EFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFFF4u;
    // 0x3efff8: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF4D0u, 0x3EFFF4u, 0x3EFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFFFCu;
label_3efffc:
    // 0x3efffc: 0x1000000e  b           . + 4 + (0xE << 2)
label_3f0000:
    if (ctx->pc == 0x3F0000u) {
        ctx->pc = 0x3F0004u;
        goto label_fallthrough_0x3efffc;
    }
    ctx->pc = 0x3EFFFCu;
    {
        const bool branch_taken_0x3efffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efffc) {
            ctx->pc = 0x3F0038u;
            goto label_3f0038;
        }
    }
label_fallthrough_0x3efffc:
    ctx->pc = 0x3F0004u;
    // 0x3f0004: 0x0  nop
    ctx->pc = 0x3f0004u;
    // NOP
label_3f0008:
    // 0x3f0008: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3f0008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3f000c: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3f000cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3f0010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0014: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x3f0014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x3f0018: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3f0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3f001c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3f001cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3f0020: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3f0020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3f0024: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3f0024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3f0028: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3f0028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3f002c: 0xc0fbd4c  jal         func_3EF530
    ctx->pc = 0x3F002Cu;
    SET_GPR_U32(ctx, 31, 0x3F0034u);
    ctx->pc = 0x3F0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F002Cu;
    // 0x3f0030: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF530u, 0x3F002Cu, 0x3F0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0034u;
label_3f0034:
    // 0x3f0034: 0x0  nop
    ctx->pc = 0x3f0034u;
    // NOP
label_3f0038:
    // 0x3f0038: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3F0038u;
    SET_GPR_U32(ctx, 31, 0x3F0040u);
    ctx->pc = 0x3F003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0038u;
    // 0x3f003c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3F0038u, 0x3F0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0040u;
label_3f0040:
    // 0x3f0040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f0040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f0044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f0048: 0x3e00008  jr          $ra
    ctx->pc = 0x3F0048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0048u;
        // 0x3f004c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F0050u;
}
