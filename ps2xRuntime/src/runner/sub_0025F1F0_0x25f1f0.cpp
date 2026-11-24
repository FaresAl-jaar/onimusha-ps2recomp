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

// Function: sub_0025F1F0
// Address: 0x25f1f0 - 0x25f368
void sub_0025F1F0_0x25f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F1F0_0x25f1f0");
#endif

    switch (ctx->pc) {
        case 0x25f244u: goto label_25f244;
        case 0x25f254u: goto label_25f254;
        case 0x25f268u: goto label_25f268;
        case 0x25f290u: goto label_25f290;
        case 0x25f2acu: goto label_25f2ac;
        case 0x25f2ccu: goto label_25f2cc;
        case 0x25f2dcu: goto label_25f2dc;
        case 0x25f2f8u: goto label_25f2f8;
        case 0x25f310u: goto label_25f310;
        case 0x25f320u: goto label_25f320;
        default: break;
    }

    ctx->pc = 0x25f1f0u;

    // 0x25f1f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f1f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f1f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25f1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25f1fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25f200: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x25f200u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f204: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25f204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25f208: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25f208u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f20c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25f210: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25f210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f214: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25f214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25f218: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25f218u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f21c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f220: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25f220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f228: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25f228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f230: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x25f230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f234: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x25f234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f238: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x25f238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x25f23c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F23Cu;
    SET_GPR_U32(ctx, 31, 0x25F244u);
    ctx->pc = 0x25F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F23Cu;
    // 0x25f240: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F23Cu, 0x25F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F244u;
label_25f244:
    // 0x25f244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F244u;
    {
        const bool branch_taken_0x25f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F244u;
        // 0x25f248: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f244) {
            ctx->pc = 0x25F258u;
            goto label_25f258;
        }
    }
    ctx->pc = 0x25F24Cu;
    // 0x25f24c: 0xc097a14  jal         func_25E850
    ctx->pc = 0x25F24Cu;
    SET_GPR_U32(ctx, 31, 0x25F254u);
    ctx->pc = 0x25F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F24Cu;
    // 0x25f250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E850u, 0x25F24Cu, 0x25F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F254u;
label_25f254:
    // 0x25f254: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f258:
    // 0x25f258: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25F258u;
    {
        const bool branch_taken_0x25f258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F258u;
        // 0x25f25c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f258) {
            ctx->pc = 0x25F330u;
            goto label_25f330;
        }
    }
    ctx->pc = 0x25F260u;
    // 0x25f260: 0xc096c94  jal         func_25B250
    ctx->pc = 0x25F260u;
    SET_GPR_U32(ctx, 31, 0x25F268u);
    ctx->pc = 0x25F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F260u;
    // 0x25f264: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x25F260u, 0x25F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F268u;
label_25f268:
    // 0x25f268: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x25f268u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x25f26c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x25f26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f270: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x25f270u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25f274: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25f274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f278: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x25f278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f27c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25f27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f284: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x25f284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f288: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25F288u;
    SET_GPR_U32(ctx, 31, 0x25F290u);
    ctx->pc = 0x25F28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F288u;
    // 0x25f28c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25F288u, 0x25F290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F290u;
label_25f290:
    // 0x25f290: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25f290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25f294: 0x93a200a8  lbu         $v0, 0xA8($sp)
    ctx->pc = 0x25f294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f298: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25f298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f29c: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x25f29cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f2a0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x25f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25f2a4: 0xc076464  jal         func_1D9190
    ctx->pc = 0x25F2A4u;
    SET_GPR_U32(ctx, 31, 0x25F2ACu);
    ctx->pc = 0x25F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2A4u;
    // 0x25f2a8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9190u, 0x25F2A4u, 0x25F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2ACu;
label_25f2ac:
    // 0x25f2ac: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x25f2acu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25f2b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25f2b4: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25f2b8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25f2bc: 0x7e0500a0  sq          $a1, 0xA0($s0)
    ctx->pc = 0x25f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 5));
    // 0x25f2c0: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x25f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x25f2c4: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F2C4u;
    SET_GPR_U32(ctx, 31, 0x25F2CCu);
    ctx->pc = 0x25F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2C4u;
    // 0x25f2c8: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F2C4u, 0x25F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2CCu;
label_25f2cc:
    // 0x25f2cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F2CCu;
    {
        const bool branch_taken_0x25f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2CCu;
        // 0x25f2d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2cc) {
            ctx->pc = 0x25F2E0u;
            goto label_25f2e0;
        }
    }
    ctx->pc = 0x25F2D4u;
    // 0x25f2d4: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25F2D4u;
    SET_GPR_U32(ctx, 31, 0x25F2DCu);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25F2D4u, 0x25F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2DCu;
label_25f2dc:
    // 0x25f2dc: 0x0  nop
    ctx->pc = 0x25f2dcu;
    // NOP
label_25f2e0:
    // 0x25f2e0: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x25f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x25f2e4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x25f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x25f2e8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F2E8u;
    {
        const bool branch_taken_0x25f2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f2e8) {
            ctx->pc = 0x25F300u;
            goto label_25f300;
        }
    }
    ctx->pc = 0x25F2F0u;
    // 0x25f2f0: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F2F0u;
    SET_GPR_U32(ctx, 31, 0x25F2F8u);
    ctx->pc = 0x25F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F2F0u;
    // 0x25f2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F2F0u, 0x25F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F2F8u;
label_25f2f8:
    // 0x25f2f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25F2F8u;
    {
        const bool branch_taken_0x25f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F2F8u;
        // 0x25f2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2f8) {
            ctx->pc = 0x25F338u;
            goto label_25f338;
        }
    }
    ctx->pc = 0x25F300u;
label_25f300:
    // 0x25f300: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25f300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f304: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25f304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f308: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x25F308u;
    SET_GPR_U32(ctx, 31, 0x25F310u);
    ctx->pc = 0x25F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F308u;
    // 0x25f30c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x25F308u, 0x25F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F310u;
label_25f310:
    // 0x25f310: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F310u;
    {
        const bool branch_taken_0x25f310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F310u;
        // 0x25f314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f310) {
            ctx->pc = 0x25F328u;
            goto label_25f328;
        }
    }
    ctx->pc = 0x25F318u;
    // 0x25f318: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F318u;
    SET_GPR_U32(ctx, 31, 0x25F320u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F318u, 0x25F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F320u;
label_25f320:
    // 0x25f320: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F320u;
    {
        const bool branch_taken_0x25f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F320u;
        // 0x25f324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f320) {
            ctx->pc = 0x25F338u;
            goto label_25f338;
        }
    }
    ctx->pc = 0x25F328u;
label_25f328:
    // 0x25f328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F328u;
    {
        const bool branch_taken_0x25f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F328u;
        // 0x25f32c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f328) {
            ctx->pc = 0x25F338u;
            goto label_25f338;
        }
    }
    ctx->pc = 0x25F330u;
label_25f330:
    // 0x25f330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f334: 0x0  nop
    ctx->pc = 0x25f334u;
    // NOP
label_25f338:
    // 0x25f338: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25f338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f33c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25f33cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f340: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25f340u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f344: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25f344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f348: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25f348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f34c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f34cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f350: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f35c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f360: 0x3e00008  jr          $ra
    ctx->pc = 0x25F360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F360u;
        // 0x25f364: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F368u;
}
