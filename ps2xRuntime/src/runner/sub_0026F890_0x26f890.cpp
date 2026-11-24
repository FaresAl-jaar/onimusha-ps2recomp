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

// Function: sub_0026F890
// Address: 0x26f890 - 0x26fb68
void sub_0026F890_0x26f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F890_0x26f890");
#endif

    switch (ctx->pc) {
        case 0x26f8a4u: goto label_26f8a4;
        case 0x26f8acu: goto label_26f8ac;
        case 0x26f8b8u: goto label_26f8b8;
        case 0x26f8c0u: goto label_26f8c0;
        case 0x26f94cu: goto label_26f94c;
        case 0x26f964u: goto label_26f964;
        case 0x26f974u: goto label_26f974;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa24u: goto label_26fa24;
        case 0x26fa34u: goto label_26fa34;
        case 0x26fa70u: goto label_26fa70;
        case 0x26faa8u: goto label_26faa8;
        case 0x26fabcu: goto label_26fabc;
        case 0x26faccu: goto label_26facc;
        case 0x26fb04u: goto label_26fb04;
        case 0x26fb24u: goto label_26fb24;
        case 0x26fb34u: goto label_26fb34;
        case 0x26fb48u: goto label_26fb48;
        default: break;
    }

    ctx->pc = 0x26f890u;

    // 0x26f890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26f894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f89c: 0xc09c074  jal         func_2701D0
    ctx->pc = 0x26F89Cu;
    SET_GPR_U32(ctx, 31, 0x26F8A4u);
    ctx->pc = 0x26F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F89Cu;
    // 0x26f8a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701D0u, 0x26F89Cu, 0x26F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8A4u;
label_26f8a4:
    // 0x26f8a4: 0xc09bfd8  jal         func_26FF60
    ctx->pc = 0x26F8A4u;
    SET_GPR_U32(ctx, 31, 0x26F8ACu);
    ctx->pc = 0x26F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8A4u;
    // 0x26f8a8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FF60u, 0x26F8A4u, 0x26F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8ACu;
label_26f8ac:
    // 0x26f8ac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f8b0: 0xc09bf64  jal         func_26FD90
    ctx->pc = 0x26F8B0u;
    SET_GPR_U32(ctx, 31, 0x26F8B8u);
    ctx->pc = 0x26F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8B0u;
    // 0x26f8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD90u, 0x26F8B0u, 0x26F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8B8u;
label_26f8b8:
    // 0x26f8b8: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x26F8B8u;
    SET_GPR_U32(ctx, 31, 0x26F8C0u);
    ctx->pc = 0x26F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8B8u;
    // 0x26f8bc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x26F8B8u, 0x26F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8C0u;
label_26f8c0:
    // 0x26f8c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26f8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f8c4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x26f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x26f8c8: 0xa3a8002a  sb          $t0, 0x2A($sp)
    ctx->pc = 0x26f8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 8));
    // 0x26f8cc: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x26f8ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x26f8d0: 0x10830091  beq         $a0, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x26F8D0u;
    {
        const bool branch_taken_0x26f8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8D0u;
        // 0x26f8d4: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8d0) {
            ctx->pc = 0x26FB18u;
            goto label_26fb18;
        }
    }
    ctx->pc = 0x26F8D8u;
    // 0x26f8d8: 0x10830075  beq         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x26F8D8u;
    {
        const bool branch_taken_0x26f8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f8d8) {
            ctx->pc = 0x26FAB0u;
            goto label_26fab0;
        }
    }
    ctx->pc = 0x26F8E0u;
    // 0x26f8e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x26f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26f8e4: 0x10830066  beq         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x26F8E4u;
    {
        const bool branch_taken_0x26f8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8E4u;
        // 0x26f8e8: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8e4) {
            ctx->pc = 0x26FA80u;
            goto label_26fa80;
        }
    }
    ctx->pc = 0x26F8ECu;
    // 0x26f8ec: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x26F8ECu;
    {
        const bool branch_taken_0x26f8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f8ec) {
            ctx->pc = 0x26FA18u;
            goto label_26fa18;
        }
    }
    ctx->pc = 0x26F8F4u;
    // 0x26f8f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f8f8: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x26F8F8u;
    {
        const bool branch_taken_0x26f8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f8f8) {
            ctx->pc = 0x26F9E0u;
            goto label_26f9e0;
        }
    }
    ctx->pc = 0x26F900u;
    // 0x26f900: 0x10880015  beq         $a0, $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26F900u;
    {
        const bool branch_taken_0x26f900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x26f900) {
            ctx->pc = 0x26F958u;
            goto label_26f958;
        }
    }
    ctx->pc = 0x26F908u;
    // 0x26f908: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F908u;
    {
        const bool branch_taken_0x26f908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f908) {
            ctx->pc = 0x26F918u;
            goto label_26f918;
        }
    }
    ctx->pc = 0x26F910u;
    // 0x26f910: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x26F910u;
    {
        const bool branch_taken_0x26f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f910) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26F918u;
label_26f918:
    // 0x26f918: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x26f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26f91c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26f91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f920: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26f920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26f924: 0x8f838884  lw          $v1, -0x777C($gp)
    ctx->pc = 0x26f924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936708)));
    // 0x26f928: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x26f928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x26f92c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26f930: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26f930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f938: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f938u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f93c: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x26f93cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26f940: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26f940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26f944: 0xc09565c  jal         func_255970
    ctx->pc = 0x26F944u;
    SET_GPR_U32(ctx, 31, 0x26F94Cu);
    ctx->pc = 0x26F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F944u;
    // 0x26f948: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x26F944u, 0x26F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F94Cu;
label_26f94c:
    // 0x26f94c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x26F94Cu;
    {
        const bool branch_taken_0x26f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f94c) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26F954u;
    // 0x26f954: 0x0  nop
    ctx->pc = 0x26f954u;
    // NOP
label_26f958:
    // 0x26f958: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26f958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26f95c: 0xc095150  jal         func_254540
    ctx->pc = 0x26F95Cu;
    SET_GPR_U32(ctx, 31, 0x26F964u);
    ctx->pc = 0x26F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F95Cu;
    // 0x26f960: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x26F95Cu, 0x26F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F964u;
label_26f964:
    // 0x26f964: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x26F964u;
    {
        const bool branch_taken_0x26f964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F964u;
        // 0x26f968: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f964) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26F96Cu;
    // 0x26f96c: 0xc095154  jal         func_254550
    ctx->pc = 0x26F96Cu;
    SET_GPR_U32(ctx, 31, 0x26F974u);
    ctx->pc = 0x26F970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F96Cu;
    // 0x26f970: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x26F96Cu, 0x26F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F974u;
label_26f974:
    // 0x26f974: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x26f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26f978: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x26f978u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x26f97c: 0xaf838888  sw          $v1, -0x7778($gp)
    ctx->pc = 0x26f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936712), GPR_U32(ctx, 3));
    // 0x26f980: 0x8f838888  lw          $v1, -0x7778($gp)
    ctx->pc = 0x26f980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936712)));
    // 0x26f984: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26F984u;
    {
        const bool branch_taken_0x26f984 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x26F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F984u;
        // 0x26f988: 0x2c610003  sltiu       $at, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f984) {
            ctx->pc = 0x26F9B0u;
            goto label_26f9b0;
        }
    }
    ctx->pc = 0x26F98Cu;
    // 0x26f98c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F98Cu;
    {
        const bool branch_taken_0x26f98c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f98c) {
            ctx->pc = 0x26F9B0u;
            goto label_26f9b0;
        }
    }
    ctx->pc = 0x26F994u;
    // 0x26f994: 0x8f848884  lw          $a0, -0x777C($gp)
    ctx->pc = 0x26f994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936708)));
    // 0x26f998: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x26f998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26f99c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26f9a0: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x26f9a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26f9a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26F9A4u;
    {
        const bool branch_taken_0x26f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9A4u;
        // 0x26f9a8: 0xaf838888  sw          $v1, -0x7778($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9a4) {
            ctx->pc = 0x26F9B8u;
            goto label_26f9b8;
        }
    }
    ctx->pc = 0x26F9ACu;
    // 0x26f9ac: 0x0  nop
    ctx->pc = 0x26f9acu;
    // NOP
label_26f9b0:
    // 0x26f9b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f9b4: 0xaf838888  sw          $v1, -0x7778($gp)
    ctx->pc = 0x26f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936712), GPR_U32(ctx, 3));
label_26f9b8:
    // 0x26f9b8: 0x8f848888  lw          $a0, -0x7778($gp)
    ctx->pc = 0x26f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936712)));
    // 0x26f9bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f9c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F9C0u;
    {
        const bool branch_taken_0x26f9c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9C0u;
        // 0x26f9c4: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9c0) {
            ctx->pc = 0x26F9D0u;
            goto label_26f9d0;
        }
    }
    ctx->pc = 0x26F9C8u;
    // 0x26f9c8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x26F9C8u;
    {
        const bool branch_taken_0x26f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9C8u;
        // 0x26f9cc: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9c8) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26F9D0u;
label_26f9d0:
    // 0x26f9d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f9d4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x26F9D4u;
    {
        const bool branch_taken_0x26f9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F9D4u;
        // 0x26f9d8: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9d4) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26F9DCu;
    // 0x26f9dc: 0x0  nop
    ctx->pc = 0x26f9dcu;
    // NOP
label_26f9e0:
    // 0x26f9e0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x26f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26f9e4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26f9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f9e8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26f9ec: 0x8f838888  lw          $v1, -0x7778($gp)
    ctx->pc = 0x26f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936712)));
    // 0x26f9f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x26f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x26f9f4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26f9f8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26f9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26f9fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26fa00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fa04: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x26fa04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26fa08: 0xc09565c  jal         func_255970
    ctx->pc = 0x26FA08u;
    SET_GPR_U32(ctx, 31, 0x26FA10u);
    ctx->pc = 0x26FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA08u;
    // 0x26fa0c: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x26FA08u, 0x26FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA10u;
label_26fa10:
    // 0x26fa10: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x26FA10u;
    {
        const bool branch_taken_0x26fa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa10) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FA18u;
label_26fa18:
    // 0x26fa18: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26fa1c: 0xc095150  jal         func_254540
    ctx->pc = 0x26FA1Cu;
    SET_GPR_U32(ctx, 31, 0x26FA24u);
    ctx->pc = 0x26FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA1Cu;
    // 0x26fa20: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x26FA1Cu, 0x26FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA24u;
label_26fa24:
    // 0x26fa24: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x26FA24u;
    {
        const bool branch_taken_0x26fa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA24u;
        // 0x26fa28: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa24) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FA2Cu;
    // 0x26fa2c: 0xc095154  jal         func_254550
    ctx->pc = 0x26FA2Cu;
    SET_GPR_U32(ctx, 31, 0x26FA34u);
    ctx->pc = 0x26FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA2Cu;
    // 0x26fa30: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x26FA2Cu, 0x26FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA34u;
label_26fa34:
    // 0x26fa34: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FA34u;
    {
        const bool branch_taken_0x26fa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fa34) {
            ctx->pc = 0x26FA78u;
            goto label_26fa78;
        }
    }
    ctx->pc = 0x26FA3Cu;
    // 0x26fa3c: 0x8f838888  lw          $v1, -0x7778($gp)
    ctx->pc = 0x26fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936712)));
    // 0x26fa40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fa44: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FA44u;
    {
        const bool branch_taken_0x26fa44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fa44) {
            ctx->pc = 0x26FA60u;
            goto label_26fa60;
        }
    }
    ctx->pc = 0x26FA4Cu;
    // 0x26fa4c: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x26fa4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x26fa50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fa54: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26FA54u;
    {
        const bool branch_taken_0x26fa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA54u;
        // 0x26fa58: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa54) {
            ctx->pc = 0x26FA60u;
            goto label_26fa60;
        }
    }
    ctx->pc = 0x26FA5Cu;
    // 0x26fa5c: 0xa0236c10  sb          $v1, 0x6C10($at)
    ctx->pc = 0x26fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 27664), (uint8_t)GPR_U32(ctx, 3));
label_26fa60:
    // 0x26fa60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26fa60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fa64: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x26fa64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x26fa68: 0xc09bdbc  jal         func_26F6F0
    ctx->pc = 0x26FA68u;
    SET_GPR_U32(ctx, 31, 0x26FA70u);
    ctx->pc = 0x26FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FA68u;
    // 0x26fa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F6F0u, 0x26FA68u, 0x26FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA70u;
label_26fa70:
    // 0x26fa70: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26FA70u;
    {
        const bool branch_taken_0x26fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fa70) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FA78u;
label_26fa78:
    // 0x26fa78: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x26FA78u;
    {
        const bool branch_taken_0x26fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA78u;
        // 0x26fa7c: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa78) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FA80u;
label_26fa80:
    // 0x26fa80: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x26fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26fa84: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26fa84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26fa88: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26fa8c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x26fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x26fa90: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26fa94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26fa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fa98: 0x34450007  ori         $a1, $v0, 0x7
    ctx->pc = 0x26fa98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x26fa9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26fa9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26faa0: 0xc09565c  jal         func_255970
    ctx->pc = 0x26FAA0u;
    SET_GPR_U32(ctx, 31, 0x26FAA8u);
    ctx->pc = 0x26FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAA0u;
    // 0x26faa4: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x26FAA0u, 0x26FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAA8u;
label_26faa8:
    // 0x26faa8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26FAA8u;
    {
        const bool branch_taken_0x26faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26faa8) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FAB0u;
label_26fab0:
    // 0x26fab0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26fab4: 0xc095150  jal         func_254540
    ctx->pc = 0x26FAB4u;
    SET_GPR_U32(ctx, 31, 0x26FABCu);
    ctx->pc = 0x26FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAB4u;
    // 0x26fab8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x26FAB4u, 0x26FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FABCu;
label_26fabc:
    // 0x26fabc: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26FABCu;
    {
        const bool branch_taken_0x26fabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FABCu;
        // 0x26fac0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fabc) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FAC4u;
    // 0x26fac4: 0xc095154  jal         func_254550
    ctx->pc = 0x26FAC4u;
    SET_GPR_U32(ctx, 31, 0x26FACCu);
    ctx->pc = 0x26FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAC4u;
    // 0x26fac8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x26FAC4u, 0x26FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FACCu;
label_26facc:
    // 0x26facc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FACCu;
    {
        const bool branch_taken_0x26facc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26facc) {
            ctx->pc = 0x26FB10u;
            goto label_26fb10;
        }
    }
    ctx->pc = 0x26FAD4u;
    // 0x26fad4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x26fad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x26fad8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x26fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x26fadc: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x26fadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x26fae0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26fae4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26fae8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26fae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26faec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26faecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26faf0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26faf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26faf4: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x26faf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26faf8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x26faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fafc: 0xc09565c  jal         func_255970
    ctx->pc = 0x26FAFCu;
    SET_GPR_U32(ctx, 31, 0x26FB04u);
    ctx->pc = 0x26FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAFCu;
    // 0x26fb00: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x26FAFCu, 0x26FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB04u;
label_26fb04:
    // 0x26fb04: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26FB04u;
    {
        const bool branch_taken_0x26fb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb04) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FB0Cu;
    // 0x26fb0c: 0x0  nop
    ctx->pc = 0x26fb0cu;
    // NOP
label_26fb10:
    // 0x26fb10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26FB10u;
    {
        const bool branch_taken_0x26fb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB10u;
        // 0x26fb14: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb10) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FB18u;
label_26fb18:
    // 0x26fb18: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26fb1c: 0xc095150  jal         func_254540
    ctx->pc = 0x26FB1Cu;
    SET_GPR_U32(ctx, 31, 0x26FB24u);
    ctx->pc = 0x26FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB1Cu;
    // 0x26fb20: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x26FB1Cu, 0x26FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB24u;
label_26fb24:
    // 0x26fb24: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26FB24u;
    {
        const bool branch_taken_0x26fb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB24u;
        // 0x26fb28: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb24) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FB2Cu;
    // 0x26fb2c: 0xc095154  jal         func_254550
    ctx->pc = 0x26FB2Cu;
    SET_GPR_U32(ctx, 31, 0x26FB34u);
    ctx->pc = 0x26FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB2Cu;
    // 0x26fb30: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x26FB2Cu, 0x26FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB34u;
label_26fb34:
    // 0x26fb34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FB34u;
    {
        const bool branch_taken_0x26fb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB34u;
        // 0x26fb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb34) {
            ctx->pc = 0x26FB50u;
            goto label_26fb50;
        }
    }
    ctx->pc = 0x26FB3Cu;
    // 0x26fb3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fb40: 0xc09bdbc  jal         func_26F6F0
    ctx->pc = 0x26FB40u;
    SET_GPR_U32(ctx, 31, 0x26FB48u);
    ctx->pc = 0x26FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB40u;
    // 0x26fb44: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F6F0u, 0x26FB40u, 0x26FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB48u;
label_26fb48:
    // 0x26fb48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FB48u;
    {
        const bool branch_taken_0x26fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fb48) {
            ctx->pc = 0x26FB58u;
            goto label_26fb58;
        }
    }
    ctx->pc = 0x26FB50u;
label_26fb50:
    // 0x26fb50: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x26fb50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fb54: 0x0  nop
    ctx->pc = 0x26fb54u;
    // NOP
label_26fb58:
    // 0x26fb58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26fb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26fb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fb60: 0x3e00008  jr          $ra
    ctx->pc = 0x26FB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB60u;
        // 0x26fb64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FB68u;
}
