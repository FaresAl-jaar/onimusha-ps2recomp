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

// Function: sub_0039F190
// Address: 0x39f190 - 0x39f2cc
void sub_0039F190_0x39f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F190_0x39f190");
#endif

    switch (ctx->pc) {
        case 0x39f1f0u: goto label_39f1f0;
        case 0x39f218u: goto label_39f218;
        case 0x39f254u: goto label_39f254;
        case 0x39f28cu: goto label_39f28c;
        default: break;
    }

    ctx->pc = 0x39f190u;

    // 0x39f190: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x39f194: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x39f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x39f198: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x39f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x39f19c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x39f1a0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x39f1a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39f1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39f1a8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x39f1a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39f1b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x39f1b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39f1b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x39f1b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39f1c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x39f1c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1c4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x39f1c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39f1cc: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x39f1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x39f1d0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x39f1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39f1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39f1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1e0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x39f1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x39f1e4: 0x2508f120  addiu       $t0, $t0, -0xEE0
    ctx->pc = 0x39f1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963488));
    // 0x39f1e8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x39F1E8u;
    SET_GPR_U32(ctx, 31, 0x39F1F0u);
    ctx->pc = 0x39F1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F1E8u;
    // 0x39f1ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x39F1E8u, 0x39F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F1F0u;
label_39f1f0:
    // 0x39f1f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39f1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f1f4: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x39F1F4u;
    {
        const bool branch_taken_0x39f1f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1F4u;
        // 0x39f1f8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f1f4) {
            ctx->pc = 0x39F298u;
            goto label_39f298;
        }
    }
    ctx->pc = 0x39F1FCu;
    // 0x39f1fc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x39f1fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f200: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x39f200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f204: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x39f204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f20c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x39f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x39f210: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x39F210u;
    SET_GPR_U32(ctx, 31, 0x39F218u);
    ctx->pc = 0x39F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F210u;
    // 0x39f214: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x39F210u, 0x39F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F218u;
label_39f218:
    // 0x39f218: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x39f218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x39f21c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39f220: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x39f220u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x39f224: 0x24422638  addiu       $v0, $v0, 0x2638
    ctx->pc = 0x39f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9784));
    // 0x39f228: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x39f228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x39f22c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39f230: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x39f230u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f238: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x39f238u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x39f23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f240: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x39f240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x39f244: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x39f244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x39f248: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x39f248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x39f24c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x39F24Cu;
    SET_GPR_U32(ctx, 31, 0x39F254u);
    ctx->pc = 0x39F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F24Cu;
    // 0x39f250: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x39F24Cu, 0x39F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F254u;
label_39f254:
    // 0x39f254: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x39f254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x39f258: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39f25c: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x39f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x39f260: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x39f260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x39f264: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x39f264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x39f268: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39f26c: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x39f26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x39f270: 0x2442263c  addiu       $v0, $v0, 0x263C
    ctx->pc = 0x39f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9788));
    // 0x39f274: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x39f274u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39f278: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x39f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x39f27c: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x39f27cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x39f280: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x39f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x39f284: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x39F284u;
    SET_GPR_U32(ctx, 31, 0x39F28Cu);
    ctx->pc = 0x39F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F284u;
    // 0x39f288: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x39F284u, 0x39F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F28Cu;
label_39f28c:
    // 0x39f28c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39F28Cu;
    {
        const bool branch_taken_0x39f28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F28Cu;
        // 0x39f290: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f28c) {
            ctx->pc = 0x39F2A0u;
            goto label_39f2a0;
        }
    }
    ctx->pc = 0x39F294u;
    // 0x39f294: 0x0  nop
    ctx->pc = 0x39f294u;
    // NOP
label_39f298:
    // 0x39f298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39f298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f29c: 0x0  nop
    ctx->pc = 0x39f29cu;
    // NOP
label_39f2a0:
    // 0x39f2a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x39f2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39f2a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x39f2a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39f2a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39f2a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39f2ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39f2acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39f2b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39f2b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39f2b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39f2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39f2b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39f2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39f2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x39F2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2C4u;
        // 0x39f2c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F2CCu;
}
