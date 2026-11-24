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

// Function: sub_00329420
// Address: 0x329420 - 0x329620
void sub_00329420_0x329420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329420_0x329420");
#endif

    switch (ctx->pc) {
        case 0x3294b8u: goto label_3294b8;
        case 0x3294c8u: goto label_3294c8;
        case 0x32952cu: goto label_32952c;
        case 0x329574u: goto label_329574;
        case 0x329588u: goto label_329588;
        case 0x329598u: goto label_329598;
        case 0x3295a4u: goto label_3295a4;
        case 0x3295c0u: goto label_3295c0;
        case 0x3295d0u: goto label_3295d0;
        case 0x3295dcu: goto label_3295dc;
        case 0x32960cu: goto label_32960c;
        default: break;
    }

    ctx->pc = 0x329420u;

    // 0x329420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329424: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x329424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x329428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32942c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329434: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x329434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x329438: 0x1083006b  beq         $a0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x329438u;
    {
        const bool branch_taken_0x329438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329438u;
        // 0x32943c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329438) {
            ctx->pc = 0x3295E8u;
            goto label_3295e8;
        }
    }
    ctx->pc = 0x329440u;
    // 0x329440: 0x1086002d  beq         $a0, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x329440u;
    {
        const bool branch_taken_0x329440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x329444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329440u;
        // 0x329444: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329440) {
            ctx->pc = 0x3294F8u;
            goto label_3294f8;
        }
    }
    ctx->pc = 0x329448u;
    // 0x329448: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x329448u;
    {
        const bool branch_taken_0x329448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329448u;
        // 0x32944c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329448) {
            ctx->pc = 0x3294C0u;
            goto label_3294c0;
        }
    }
    ctx->pc = 0x329450u;
    // 0x329450: 0x10850015  beq         $a0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x329450u;
    {
        const bool branch_taken_0x329450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x329450) {
            ctx->pc = 0x3294A8u;
            goto label_3294a8;
        }
    }
    ctx->pc = 0x329458u;
    // 0x329458: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x329458u;
    {
        const bool branch_taken_0x329458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329458) {
            ctx->pc = 0x329468u;
            goto label_329468;
        }
    }
    ctx->pc = 0x329460u;
    // 0x329460: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x329460u;
    {
        const bool branch_taken_0x329460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329460) {
            ctx->pc = 0x3295F8u;
            goto label_3295f8;
        }
    }
    ctx->pc = 0x329468u;
label_329468:
    // 0x329468: 0x8f848b68  lw          $a0, -0x7498($gp)
    ctx->pc = 0x329468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x32946c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329470: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x329470u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329474: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x329474u;
    {
        const bool branch_taken_0x329474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329474) {
            ctx->pc = 0x3294A0u;
            goto label_3294a0;
        }
    }
    ctx->pc = 0x32947Cu;
    // 0x32947c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32947Cu;
    {
        const bool branch_taken_0x32947c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x329480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32947Cu;
        // 0x329480: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32947c) {
            ctx->pc = 0x329498u;
            goto label_329498;
        }
    }
    ctx->pc = 0x329484u;
    // 0x329484: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x329484u;
    {
        const bool branch_taken_0x329484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329484) {
            ctx->pc = 0x329600u;
            goto label_329600;
        }
    }
    ctx->pc = 0x32948Cu;
    // 0x32948c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x32948Cu;
    {
        const bool branch_taken_0x32948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32948c) {
            ctx->pc = 0x3295F8u;
            goto label_3295f8;
        }
    }
    ctx->pc = 0x329494u;
    // 0x329494: 0x0  nop
    ctx->pc = 0x329494u;
    // NOP
label_329498:
    // 0x329498: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x329498u;
    {
        const bool branch_taken_0x329498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329498u;
        // 0x32949c: 0xa2050001  sb          $a1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329498) {
            ctx->pc = 0x3295F8u;
            goto label_3295f8;
        }
    }
    ctx->pc = 0x3294A0u;
label_3294a0:
    // 0x3294a0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3294A0u;
    {
        const bool branch_taken_0x3294a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294A0u;
        // 0x3294a4: 0xa2060001  sb          $a2, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294a0) {
            ctx->pc = 0x3295F8u;
            goto label_3295f8;
        }
    }
    ctx->pc = 0x3294A8u;
label_3294a8:
    // 0x3294a8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3294a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3294ac: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x3294acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x3294b0: 0xc0e1404  jal         func_385010
    ctx->pc = 0x3294B0u;
    SET_GPR_U32(ctx, 31, 0x3294B8u);
    ctx->pc = 0x3294B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294B0u;
    // 0x3294b4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385010u, 0x3294B0u, 0x3294B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294B8u;
label_3294b8:
    // 0x3294b8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3294B8u;
    {
        const bool branch_taken_0x3294b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3294b8) {
            ctx->pc = 0x3295F8u;
            goto label_3295f8;
        }
    }
    ctx->pc = 0x3294C0u;
label_3294c0:
    // 0x3294c0: 0xc0e1414  jal         func_385050
    ctx->pc = 0x3294C0u;
    SET_GPR_U32(ctx, 31, 0x3294C8u);
    ctx->pc = 0x3294C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294C0u;
    // 0x3294c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385050u, 0x3294C0u, 0x3294C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294C8u;
label_3294c8:
    // 0x3294c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3294c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3294cc: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3294CCu;
    {
        const bool branch_taken_0x3294cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3294D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294CCu;
        // 0x3294d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294cc) {
            ctx->pc = 0x329600u;
            goto label_329600;
        }
    }
    ctx->pc = 0x3294D4u;
    // 0x3294d4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3294D4u;
    {
        const bool branch_taken_0x3294d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3294d4) {
            ctx->pc = 0x3294E8u;
            goto label_3294e8;
        }
    }
    ctx->pc = 0x3294DCu;
    // 0x3294dc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3294DCu;
    {
        const bool branch_taken_0x3294dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3294dc) {
            ctx->pc = 0x3295F8u;
            goto label_3295f8;
        }
    }
    ctx->pc = 0x3294E4u;
    // 0x3294e4: 0x0  nop
    ctx->pc = 0x3294e4u;
    // NOP
label_3294e8:
    // 0x3294e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3294e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3294ec: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3294ECu;
    {
        const bool branch_taken_0x3294ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294ECu;
        // 0x3294f0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294ec) {
            ctx->pc = 0x3295F8u;
            goto label_3295f8;
        }
    }
    ctx->pc = 0x3294F4u;
    // 0x3294f4: 0x0  nop
    ctx->pc = 0x3294f4u;
    // NOP
label_3294f8:
    // 0x3294f8: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x3294f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x3294fc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3294FCu;
    {
        const bool branch_taken_0x3294fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294FCu;
        // 0x329500: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294fc) {
            ctx->pc = 0x3295B0u;
            goto label_3295b0;
        }
    }
    ctx->pc = 0x329504u;
    // 0x329504: 0x3c020110  lui         $v0, 0x110
    ctx->pc = 0x329504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)272 << 16));
    // 0x329508: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x329508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x32950c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32950cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x329510: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x329510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x329514: 0x34456000  ori         $a1, $v0, 0x6000
    ctx->pc = 0x329514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x329518: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x329518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x32951c: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x32951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x329520: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x329520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x329524: 0xc05e390  jal         func_178E40
    ctx->pc = 0x329524u;
    SET_GPR_U32(ctx, 31, 0x32952Cu);
    ctx->pc = 0x329528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329524u;
    // 0x329528: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x329524u, 0x32952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32952Cu;
label_32952c:
    // 0x32952c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x329530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329534: 0x9022fc8c  lbu         $v0, -0x374($at)
    ctx->pc = 0x329534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x329538: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x329538u;
    {
        const bool branch_taken_0x329538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x32953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329538u;
        // 0x32953c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329538) {
            ctx->pc = 0x329560u;
            goto label_329560;
        }
    }
    ctx->pc = 0x329540u;
    // 0x329540: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x329540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x329544: 0x9022fc8e  lbu         $v0, -0x372($at)
    ctx->pc = 0x329544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x329548: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x329548u;
    {
        const bool branch_taken_0x329548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x329548) {
            ctx->pc = 0x329560u;
            goto label_329560;
        }
    }
    ctx->pc = 0x329550u;
    // 0x329550: 0x8f8482e0  lw          $a0, -0x7D20($gp)
    ctx->pc = 0x329550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x329554: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x329554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x329558: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x329558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32955c: 0xaf8282e0  sw          $v0, -0x7D20($gp)
    ctx->pc = 0x32955cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 2));
label_329560:
    // 0x329560: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x329560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x329564: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x329564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x329568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32956c: 0xc0aba24  jal         func_2AE890
    ctx->pc = 0x32956Cu;
    SET_GPR_U32(ctx, 31, 0x329574u);
    ctx->pc = 0x329570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32956Cu;
    // 0x329570: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE890u, 0x32956Cu, 0x329574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329574u;
label_329574:
    // 0x329574: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x329574u;
    {
        const bool branch_taken_0x329574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329574u;
        // 0x329578: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329574) {
            ctx->pc = 0x3295B0u;
            goto label_3295b0;
        }
    }
    ctx->pc = 0x32957Cu;
    // 0x32957c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x32957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x329580: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x329580u;
    SET_GPR_U32(ctx, 31, 0x329588u);
    ctx->pc = 0x329584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329580u;
    // 0x329584: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x329580u, 0x329588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329588u;
label_329588:
    // 0x329588: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x329588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32958c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x32958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x329590: 0xc04ca14  jal         func_132850
    ctx->pc = 0x329590u;
    SET_GPR_U32(ctx, 31, 0x329598u);
    ctx->pc = 0x329594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329590u;
    // 0x329594: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x329590u, 0x329598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329598u;
label_329598:
    // 0x329598: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x329598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x32959c: 0xc0537cc  jal         func_14DF30
    ctx->pc = 0x32959Cu;
    SET_GPR_U32(ctx, 31, 0x3295A4u);
    ctx->pc = 0x3295A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32959Cu;
    // 0x3295a0: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF30u, 0x32959Cu, 0x3295A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295A4u;
label_3295a4:
    // 0x3295a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3295A4u;
    {
        const bool branch_taken_0x3295a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3295a4) {
            ctx->pc = 0x329600u;
            goto label_329600;
        }
    }
    ctx->pc = 0x3295ACu;
    // 0x3295ac: 0x0  nop
    ctx->pc = 0x3295acu;
    // NOP
label_3295b0:
    // 0x3295b0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3295b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3295b4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3295b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3295b8: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3295B8u;
    SET_GPR_U32(ctx, 31, 0x3295C0u);
    ctx->pc = 0x3295BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295B8u;
    // 0x3295bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3295B8u, 0x3295C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295C0u;
label_3295c0:
    // 0x3295c0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3295c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3295c4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3295c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3295c8: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3295C8u;
    SET_GPR_U32(ctx, 31, 0x3295D0u);
    ctx->pc = 0x3295CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295C8u;
    // 0x3295cc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3295C8u, 0x3295D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295D0u;
label_3295d0:
    // 0x3295d0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3295d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3295d4: 0xc0537cc  jal         func_14DF30
    ctx->pc = 0x3295D4u;
    SET_GPR_U32(ctx, 31, 0x3295DCu);
    ctx->pc = 0x3295D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295D4u;
    // 0x3295d8: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF30u, 0x3295D4u, 0x3295DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295DCu;
label_3295dc:
    // 0x3295dc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3295dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3295e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3295E0u;
    {
        const bool branch_taken_0x3295e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295E0u;
        // 0x3295e4: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295e0) {
            ctx->pc = 0x3295F8u;
            goto label_3295f8;
        }
    }
    ctx->pc = 0x3295E8u;
label_3295e8:
    // 0x3295e8: 0x8f838b68  lw          $v1, -0x7498($gp)
    ctx->pc = 0x3295e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x3295ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3295ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3295f0: 0xaf838b68  sw          $v1, -0x7498($gp)
    ctx->pc = 0x3295f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
    // 0x3295f4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3295f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_3295f8:
    // 0x3295f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3295F8u;
    {
        const bool branch_taken_0x3295f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3295f8) {
            ctx->pc = 0x329610u;
            goto label_329610;
        }
    }
    ctx->pc = 0x329600u;
label_329600:
    // 0x329600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329604: 0xc0e0f3c  jal         func_383CF0
    ctx->pc = 0x329604u;
    SET_GPR_U32(ctx, 31, 0x32960Cu);
    ctx->pc = 0x329608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329604u;
    // 0x329608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383CF0u, 0x329604u, 0x32960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32960Cu;
label_32960c:
    // 0x32960c: 0x0  nop
    ctx->pc = 0x32960cu;
    // NOP
label_329610:
    // 0x329610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329618: 0x3e00008  jr          $ra
    ctx->pc = 0x329618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329618u;
        // 0x32961c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329620u;
}
