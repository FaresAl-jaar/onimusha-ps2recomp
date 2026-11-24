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

// Function: sub_003E42B0
// Address: 0x3e42b0 - 0x3e4448
void sub_003E42B0_0x3e42b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E42B0_0x3e42b0");
#endif

    switch (ctx->pc) {
        case 0x3e42ccu: goto label_3e42cc;
        case 0x3e42e0u: goto label_3e42e0;
        case 0x3e4434u: goto label_3e4434;
        default: break;
    }

    ctx->pc = 0x3e42b0u;

    // 0x3e42b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e42b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e42b4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e42b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e42b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e42bc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3e42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3e42c0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3e42c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3e42c4: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3E42C4u;
    SET_GPR_U32(ctx, 31, 0x3E42CCu);
    ctx->pc = 0x3E42C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42C4u;
    // 0x3e42c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3E42C4u, 0x3E42CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42CCu;
label_3e42cc:
    // 0x3e42cc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e42ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e42d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e42d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e42d4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3e42d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3e42d8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3E42D8u;
    SET_GPR_U32(ctx, 31, 0x3E42E0u);
    ctx->pc = 0x3E42DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E42D8u;
    // 0x3e42dc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3E42D8u, 0x3E42E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E42E0u;
label_3e42e0:
    // 0x3e42e0: 0x12000055  beqz        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3E42E0u;
    {
        const bool branch_taken_0x3e42e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42E0u;
        // 0x3e42e4: 0xaf808d10  sw          $zero, -0x72F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e42e0) {
            ctx->pc = 0x3E4438u;
            goto label_3e4438;
        }
    }
    ctx->pc = 0x3E42E8u;
    // 0x3e42e8: 0x8f888d10  lw          $t0, -0x72F0($gp)
    ctx->pc = 0x3e42e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x3e42ec: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3e42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3e42f0: 0xaf828d08  sw          $v0, -0x72F8($gp)
    ctx->pc = 0x3e42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937864), GPR_U32(ctx, 2));
    // 0x3e42f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e42f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e42f8: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x3e42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x3e42fc: 0xaf808d00  sw          $zero, -0x7300($gp)
    ctx->pc = 0x3e42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937856), GPR_U32(ctx, 0));
    // 0x3e4300: 0xaf828d0c  sw          $v0, -0x72F4($gp)
    ctx->pc = 0x3e4300u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937868), GPR_U32(ctx, 2));
    // 0x3e4304: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3e4304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3e4308: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x3e4308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x3e430c: 0xaf808d04  sw          $zero, -0x72FC($gp)
    ctx->pc = 0x3e430cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937860), GPR_U32(ctx, 0));
    // 0x3e4310: 0x3443004c  ori         $v1, $v0, 0x4C
    ctx->pc = 0x3e4310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x3e4314: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x3e4314u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x3e4318: 0x8423c  dsll32      $t0, $t0, 8
    ctx->pc = 0x3e4318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 8));
    // 0x3e431c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3e431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3e4320: 0x8423e  dsrl32      $t0, $t0, 8
    ctx->pc = 0x3e4320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x3e4324: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3e4324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3e4328: 0xaf888d10  sw          $t0, -0x72F0($gp)
    ctx->pc = 0x3e4328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 8));
    // 0x3e432c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3e432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3e4330: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x3e4330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x3e4334: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3e4334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3e4338: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x3e4338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x3e433c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3e433cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3e4340: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3e4340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3e4344: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x3e4344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x3e4348: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3e4348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3e434c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3e434cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x3e4350: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x3e4350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x3e4354: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3e4354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3e4358: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3e4358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3e435c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x3e435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x3e4360: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3e4360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3e4364: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3e4364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x3e4368: 0x8f868d00  lw          $a2, -0x7300($gp)
    ctx->pc = 0x3e4368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    // 0x3e436c: 0x8f838d04  lw          $v1, -0x72FC($gp)
    ctx->pc = 0x3e436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    // 0x3e4370: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x3e4370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x3e4374: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3e4374u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3e4378: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x3e4378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x3e437c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3e437cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e4380: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x3e4380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x3e4384: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3e4384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3e4388: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3e4388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x3e438c: 0x8f83845c  lw          $v1, -0x7BA4($gp)
    ctx->pc = 0x3e438cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x3e4390: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3e4390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3e4394: 0x8f868d08  lw          $a2, -0x72F8($gp)
    ctx->pc = 0x3e4394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937864)));
    // 0x3e4398: 0x8f838d04  lw          $v1, -0x72FC($gp)
    ctx->pc = 0x3e4398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    // 0x3e439c: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x3e439cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x3e43a0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3e43a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3e43a4: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x3e43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x3e43a8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3e43a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e43ac: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x3e43acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x3e43b0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3e43b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3e43b4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3e43b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x3e43b8: 0x8f83845c  lw          $v1, -0x7BA4($gp)
    ctx->pc = 0x3e43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x3e43bc: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3e43bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3e43c0: 0x8f868d00  lw          $a2, -0x7300($gp)
    ctx->pc = 0x3e43c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    // 0x3e43c4: 0x8f838d0c  lw          $v1, -0x72F4($gp)
    ctx->pc = 0x3e43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x3e43c8: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x3e43c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x3e43cc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3e43ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3e43d0: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x3e43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x3e43d4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3e43d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e43d8: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x3e43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x3e43dc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3e43dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3e43e0: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x3e43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x3e43e4: 0x8f83845c  lw          $v1, -0x7BA4($gp)
    ctx->pc = 0x3e43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x3e43e8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x3e43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x3e43ec: 0x8f868d08  lw          $a2, -0x72F8($gp)
    ctx->pc = 0x3e43ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937864)));
    // 0x3e43f0: 0x8f838d0c  lw          $v1, -0x72F4($gp)
    ctx->pc = 0x3e43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    // 0x3e43f4: 0x24c60700  addiu       $a2, $a2, 0x700
    ctx->pc = 0x3e43f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x3e43f8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3e43f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3e43fc: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x3e43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x3e4400: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3e4400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3e4404: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x3e4404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x3e4408: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3e4408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3e440c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x3e440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x3e4410: 0x8f83845c  lw          $v1, -0x7BA4($gp)
    ctx->pc = 0x3e4410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x3e4414: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x3e4414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x3e4418: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e4418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e441c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e441cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e4420: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3e4420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3e4424: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x3e4424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4428: 0x8f868460  lw          $a2, -0x7BA0($gp)
    ctx->pc = 0x3e4428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x3e442c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3E442Cu;
    SET_GPR_U32(ctx, 31, 0x3E4434u);
    ctx->pc = 0x3E4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E442Cu;
    // 0x3e4430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3E442Cu, 0x3E4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4434u;
label_3e4434:
    // 0x3e4434: 0x0  nop
    ctx->pc = 0x3e4434u;
    // NOP
label_3e4438:
    // 0x3e4438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e4438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e443c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e443cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4440: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4440u;
        // 0x3e4444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4448u;
}
