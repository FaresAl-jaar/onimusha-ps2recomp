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

// Function: sub_0018F6D0
// Address: 0x18f6d0 - 0x18f848
void sub_0018F6D0_0x18f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F6D0_0x18f6d0");
#endif

    switch (ctx->pc) {
        case 0x18f758u: goto label_18f758;
        case 0x18f7c0u: goto label_18f7c0;
        case 0x18f7d0u: goto label_18f7d0;
        case 0x18f838u: goto label_18f838;
        default: break;
    }

    ctx->pc = 0x18f6d0u;

    // 0x18f6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f6dc: 0x938386dc  lbu         $v1, -0x7924($gp)
    ctx->pc = 0x18f6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936284)));
    // 0x18f6e0: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x18F6E0u;
    {
        const bool branch_taken_0x18f6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6E0u;
        // 0x18f6e4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6e0) {
            ctx->pc = 0x18F838u;
            goto label_18f838;
        }
    }
    ctx->pc = 0x18F6E8u;
    // 0x18f6e8: 0x3c058ff8  lui         $a1, 0x8FF8
    ctx->pc = 0x18f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36856 << 16));
    // 0x18f6ec: 0x8c23ced4  lw          $v1, -0x312C($at)
    ctx->pc = 0x18f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954708)));
    // 0x18f6f0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x18f6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x18f6f4: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F6F4u;
    {
        const bool branch_taken_0x18f6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x18f6f4) {
            ctx->pc = 0x18F738u;
            goto label_18f738;
        }
    }
    ctx->pc = 0x18F6FCu;
    // 0x18f6fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F6FCu;
    {
        const bool branch_taken_0x18f6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f6fc) {
            ctx->pc = 0x18F720u;
            goto label_18f720;
        }
    }
    ctx->pc = 0x18F704u;
    // 0x18f704: 0x938386e0  lbu         $v1, -0x7920($gp)
    ctx->pc = 0x18f704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x18f708: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x18f708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18f70c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x18F70Cu;
    {
        const bool branch_taken_0x18f70c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f70c) {
            ctx->pc = 0x18F738u;
            goto label_18f738;
        }
    }
    ctx->pc = 0x18F714u;
    // 0x18f714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18f718: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F718u;
    {
        const bool branch_taken_0x18f718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F718u;
        // 0x18f71c: 0xa38386e0  sb          $v1, -0x7920($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936288), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f718) {
            ctx->pc = 0x18F738u;
            goto label_18f738;
        }
    }
    ctx->pc = 0x18F720u;
label_18f720:
    // 0x18f720: 0x938386e0  lbu         $v1, -0x7920($gp)
    ctx->pc = 0x18f720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x18f724: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F724u;
    {
        const bool branch_taken_0x18f724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f724) {
            ctx->pc = 0x18F738u;
            goto label_18f738;
        }
    }
    ctx->pc = 0x18F72Cu;
    // 0x18f72c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18f730: 0xa38386e0  sb          $v1, -0x7920($gp)
    ctx->pc = 0x18f730u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936288), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f734: 0x0  nop
    ctx->pc = 0x18f734u;
    // NOP
label_18f738:
    // 0x18f738: 0x938386e0  lbu         $v1, -0x7920($gp)
    ctx->pc = 0x18f738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936288)));
    // 0x18f73c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18f740: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x18f740u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18f744: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x18F744u;
    {
        const bool branch_taken_0x18f744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F744u;
        // 0x18f748: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f744) {
            ctx->pc = 0x18F838u;
            goto label_18f838;
        }
    }
    ctx->pc = 0x18F74Cu;
    // 0x18f74c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x18f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18f750: 0xc05e360  jal         func_178D80
    ctx->pc = 0x18F750u;
    SET_GPR_U32(ctx, 31, 0x18F758u);
    ctx->pc = 0x18F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F750u;
    // 0x18f754: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x18F750u, 0x18F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F758u;
label_18f758:
    // 0x18f758: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x18f758u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x18f75c: 0x3c031418  lui         $v1, 0x1418
    ctx->pc = 0x18f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5144 << 16));
    // 0x18f760: 0x34630046  ori         $v1, $v1, 0x46
    ctx->pc = 0x18f760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)70);
    // 0x18f764: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x18f764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x18f768: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x18f768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18f76c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x18f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x18f770: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18f774: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x18f774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x18f778: 0x34692000  ori         $t1, $v1, 0x2000
    ctx->pc = 0x18f778u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18f77c: 0x3407fffb  ori         $a3, $zero, 0xFFFB
    ctx->pc = 0x18f77cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x18f780: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x18f780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x18f784: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x18f784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x18f788: 0x34687000  ori         $t0, $v1, 0x7000
    ctx->pc = 0x18f788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x18f78c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18f78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f790: 0x3c037a80  lui         $v1, 0x7A80
    ctx->pc = 0x18f790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31360 << 16));
    // 0x18f794: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f798: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x18f798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x18f79c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x18f79cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x18f7a0: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x18f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x18f7a4: 0xa050000f  sb          $s0, 0xF($v0)
    ctx->pc = 0x18f7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 16));
    // 0x18f7a8: 0xac4b0008  sw          $t3, 0x8($v0)
    ctx->pc = 0x18f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 11));
    // 0x18f7ac: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x18f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x18f7b0: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x18f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x18f7b4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x18f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x18f7b8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x18F7B8u;
    SET_GPR_U32(ctx, 31, 0x18F7C0u);
    ctx->pc = 0x18F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7B8u;
    // 0x18f7bc: 0xac47001c  sw          $a3, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x18F7B8u, 0x18F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7C0u;
label_18f7c0:
    // 0x18f7c0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18f7c4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x18f7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18f7c8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x18F7C8u;
    SET_GPR_U32(ctx, 31, 0x18F7D0u);
    ctx->pc = 0x18F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7C8u;
    // 0x18f7cc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x18F7C8u, 0x18F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7D0u;
label_18f7d0:
    // 0x18f7d0: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x18f7d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x18f7d4: 0x3c031418  lui         $v1, 0x1418
    ctx->pc = 0x18f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5144 << 16));
    // 0x18f7d8: 0x34630046  ori         $v1, $v1, 0x46
    ctx->pc = 0x18f7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)70);
    // 0x18f7dc: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x18f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x18f7e0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x18f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18f7e4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x18f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x18f7e8: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x18f7e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18f7ec: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x18f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x18f7f0: 0x34692000  ori         $t1, $v1, 0x2000
    ctx->pc = 0x18f7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18f7f4: 0x3407fffb  ori         $a3, $zero, 0xFFFB
    ctx->pc = 0x18f7f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x18f7f8: 0x3c038580  lui         $v1, 0x8580
    ctx->pc = 0x18f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34176 << 16));
    // 0x18f7fc: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x18f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x18f800: 0x34687000  ori         $t0, $v1, 0x7000
    ctx->pc = 0x18f800u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x18f804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18f804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f808: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x18f808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x18f80c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f810: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x18f810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x18f814: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x18f814u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x18f818: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x18f818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x18f81c: 0xa050000f  sb          $s0, 0xF($v0)
    ctx->pc = 0x18f81cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 16));
    // 0x18f820: 0xac4b0008  sw          $t3, 0x8($v0)
    ctx->pc = 0x18f820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 11));
    // 0x18f824: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x18f824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x18f828: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x18f828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x18f82c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x18f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x18f830: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x18F830u;
    SET_GPR_U32(ctx, 31, 0x18F838u);
    ctx->pc = 0x18F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F830u;
    // 0x18f834: 0xac47001c  sw          $a3, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x18F830u, 0x18F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F838u;
label_18f838:
    // 0x18f838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f840: 0x3e00008  jr          $ra
    ctx->pc = 0x18F840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F840u;
        // 0x18f844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F848u;
}
