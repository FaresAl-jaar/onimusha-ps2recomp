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

// Function: sub_003D4260
// Address: 0x3d4260 - 0x3d439c
void sub_003D4260_0x3d4260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4260_0x3d4260");
#endif

    switch (ctx->pc) {
        case 0x3d42c0u: goto label_3d42c0;
        case 0x3d42e8u: goto label_3d42e8;
        case 0x3d4324u: goto label_3d4324;
        case 0x3d435cu: goto label_3d435c;
        default: break;
    }

    ctx->pc = 0x3d4260u;

    // 0x3d4260: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d4260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3d4264: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3d4268: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d4268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3d426c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d4270: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3d4270u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4274: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d4274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d4278: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3d4278u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d427c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d4280: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3d4280u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4284: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d4284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d4288: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3d4288u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d428c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d4290: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d4290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4294: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3d4294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d4298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d429c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d429cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d42a0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3d42a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d42a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d42a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d42acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42b0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3d42b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3d42b4: 0x250841f0  addiu       $t0, $t0, 0x41F0
    ctx->pc = 0x3d42b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16880));
    // 0x3d42b8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3D42B8u;
    SET_GPR_U32(ctx, 31, 0x3D42C0u);
    ctx->pc = 0x3D42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D42B8u;
    // 0x3d42bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3D42B8u, 0x3D42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D42C0u;
label_3d42c0:
    // 0x3d42c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d42c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42c4: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3D42C4u;
    {
        const bool branch_taken_0x3d42c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42C4u;
        // 0x3d42c8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42c4) {
            ctx->pc = 0x3D4368u;
            goto label_3d4368;
        }
    }
    ctx->pc = 0x3D42CCu;
    // 0x3d42cc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d42ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42d0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3d42d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42d4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3d42d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d42d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d42dc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3d42dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d42e0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3D42E0u;
    SET_GPR_U32(ctx, 31, 0x3D42E8u);
    ctx->pc = 0x3D42E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D42E0u;
    // 0x3d42e4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3D42E0u, 0x3D42E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D42E8u;
label_3d42e8:
    // 0x3d42e8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3d42e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3d42ec: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d42f0: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x3d42f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3d42f4: 0x24423280  addiu       $v0, $v0, 0x3280
    ctx->pc = 0x3d42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12928));
    // 0x3d42f8: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x3d42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3d42fc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d42fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d4300: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x3d4300u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d4304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4308: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x3d4308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x3d430c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d430cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4310: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3d4310u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d4314: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3d4314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d4318: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3d4318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d431c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3D431Cu;
    SET_GPR_U32(ctx, 31, 0x3D4324u);
    ctx->pc = 0x3D4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D431Cu;
    // 0x3d4320: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3D431Cu, 0x3D4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4324u;
label_3d4324:
    // 0x3d4324: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3d4324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3d4328: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d4328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d432c: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3d432cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3d4330: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3d4330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d4334: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x3d4334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x3d4338: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d4338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d433c: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x3d433cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x3d4340: 0x24423284  addiu       $v0, $v0, 0x3284
    ctx->pc = 0x3d4340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12932));
    // 0x3d4344: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x3d4344u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d4348: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3d4348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3d434c: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3d434cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3d4350: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3d4350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d4354: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3D4354u;
    SET_GPR_U32(ctx, 31, 0x3D435Cu);
    ctx->pc = 0x3D4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4354u;
    // 0x3d4358: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3D4354u, 0x3D435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D435Cu;
label_3d435c:
    // 0x3d435c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D435Cu;
    {
        const bool branch_taken_0x3d435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D435Cu;
        // 0x3d4360: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d435c) {
            ctx->pc = 0x3D4370u;
            goto label_3d4370;
        }
    }
    ctx->pc = 0x3D4364u;
    // 0x3d4364: 0x0  nop
    ctx->pc = 0x3d4364u;
    // NOP
label_3d4368:
    // 0x3d4368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d436c: 0x0  nop
    ctx->pc = 0x3d436cu;
    // NOP
label_3d4370:
    // 0x3d4370: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d4370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d4374: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d4374u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d4378: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d4378u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d437c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d437cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d4380: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d4380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d4384: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d4384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d4388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d4388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d438c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d438cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d4390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4394: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4394u;
        // 0x3d4398: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D439Cu;
}
