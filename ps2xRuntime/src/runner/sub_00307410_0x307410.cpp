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

// Function: sub_00307410
// Address: 0x307410 - 0x307558
void sub_00307410_0x307410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307410_0x307410");
#endif

    switch (ctx->pc) {
        case 0x307468u: goto label_307468;
        case 0x307490u: goto label_307490;
        case 0x3074d0u: goto label_3074d0;
        case 0x307514u: goto label_307514;
        default: break;
    }

    ctx->pc = 0x307410u;

    // 0x307410: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x307410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x307414: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x307414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x307418: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x307418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30741c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x307420: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x307420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307424: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x307424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x307428: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x307428u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30742c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x307430: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x307430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307434: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x307438: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x307438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30743c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30743cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307440: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x307440u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x307444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x307448: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x307448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30744c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x30744cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307450: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30745c: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x30745cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x307460: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x307460u;
    SET_GPR_U32(ctx, 31, 0x307468u);
    ctx->pc = 0x307464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307460u;
    // 0x307464: 0x250873a0  addiu       $t0, $t0, 0x73A0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x307460u, 0x307468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307468u;
label_307468:
    // 0x307468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30746c: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x30746Cu;
    {
        const bool branch_taken_0x30746c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x307470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30746Cu;
        // 0x307470: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30746c) {
            ctx->pc = 0x307528u;
            goto label_307528;
        }
    }
    ctx->pc = 0x307474u;
    // 0x307474: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x307474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307478: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x307478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30747c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x30747cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307484: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x307484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x307488: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x307488u;
    SET_GPR_U32(ctx, 31, 0x307490u);
    ctx->pc = 0x30748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307488u;
    // 0x30748c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x307488u, 0x307490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307490u;
label_307490:
    // 0x307490: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x307490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x307494: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x307494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x307498: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x307498u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30749c: 0x2442c820  addiu       $v0, $v0, -0x37E0
    ctx->pc = 0x30749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952992));
    // 0x3074a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3074a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3074a4: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3074a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3074a8: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x3074a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3074ac: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3074acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3074b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3074b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3074b4: 0xa6260526  sh          $a2, 0x526($s1)
    ctx->pc = 0x3074b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x3074b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3074b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3074bc: 0xa6250528  sh          $a1, 0x528($s1)
    ctx->pc = 0x3074bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3074c0: 0xa623052a  sh          $v1, 0x52A($s1)
    ctx->pc = 0x3074c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3074c4: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x3074c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3074c8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3074C8u;
    SET_GPR_U32(ctx, 31, 0x3074D0u);
    ctx->pc = 0x3074CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074C8u;
    // 0x3074cc: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3074C8u, 0x3074D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074D0u;
label_3074d0:
    // 0x3074d0: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x3074d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
    // 0x3074d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3074d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3074d8: 0xae220564  sw          $v0, 0x564($s1)
    ctx->pc = 0x3074d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 2));
    // 0x3074dc: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3074dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3074e0: 0xa2330568  sb          $s3, 0x568($s1)
    ctx->pc = 0x3074e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1384), (uint8_t)GPR_U32(ctx, 19));
    // 0x3074e4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3074e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3074e8: 0xa2320569  sb          $s2, 0x569($s1)
    ctx->pc = 0x3074e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1385), (uint8_t)GPR_U32(ctx, 18));
    // 0x3074ec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3074ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3074f0: 0x78265c70  lq          $a2, 0x5C70($at)
    ctx->pc = 0x3074f0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C70u));
    // 0x3074f4: 0x2442c824  addiu       $v0, $v0, -0x37DC
    ctx->pc = 0x3074f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952996));
    // 0x3074f8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3074f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3074fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3074fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x307500: 0x7e260550  sq          $a2, 0x550($s1)
    ctx->pc = 0x307500u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 6));
    // 0x307504: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x307504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x307508: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x307508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30750c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x30750Cu;
    SET_GPR_U32(ctx, 31, 0x307514u);
    ctx->pc = 0x307510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30750Cu;
    // 0x307510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x30750Cu, 0x307514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307514u;
label_307514:
    // 0x307514: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x307514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x307518: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x307518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x30751c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30751Cu;
    {
        const bool branch_taken_0x30751c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30751Cu;
        // 0x307520: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30751c) {
            ctx->pc = 0x307530u;
            goto label_307530;
        }
    }
    ctx->pc = 0x307524u;
    // 0x307524: 0x0  nop
    ctx->pc = 0x307524u;
    // NOP
label_307528:
    // 0x307528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x307528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30752c: 0x0  nop
    ctx->pc = 0x30752cu;
    // NOP
label_307530:
    // 0x307530: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x307530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x307534: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x307534u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x307538: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x307538u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30753c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30753cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307540: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x307540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307544: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30754c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30754cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307550: 0x3e00008  jr          $ra
    ctx->pc = 0x307550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307550u;
        // 0x307554: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307558u;
}
