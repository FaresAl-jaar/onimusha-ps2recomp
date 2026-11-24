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

// Function: sub_00345010
// Address: 0x345010 - 0x34516c
void sub_00345010_0x345010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345010_0x345010");
#endif

    switch (ctx->pc) {
        case 0x345070u: goto label_345070;
        case 0x345098u: goto label_345098;
        case 0x3450e4u: goto label_3450e4;
        case 0x345120u: goto label_345120;
        case 0x345128u: goto label_345128;
        default: break;
    }

    ctx->pc = 0x345010u;

    // 0x345010: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x345010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x345014: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x345014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x345018: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x345018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x34501c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x34501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x345020: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x345020u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345024: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x345024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x345028: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x345028u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34502c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x345030: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x345030u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345034: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x345034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x345038: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x345038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34503c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x345040: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x345040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345044: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x345044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34504c: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x34504cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x345050: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x345050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345054: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x345054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x345058: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x345058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34505c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34505cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345060: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x345060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x345064: 0x25084fa0  addiu       $t0, $t0, 0x4FA0
    ctx->pc = 0x345064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20384));
    // 0x345068: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x345068u;
    SET_GPR_U32(ctx, 31, 0x345070u);
    ctx->pc = 0x34506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345068u;
    // 0x34506c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x345068u, 0x345070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345070u;
label_345070:
    // 0x345070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x345070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345074: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x345074u;
    {
        const bool branch_taken_0x345074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x345078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345074u;
        // 0x345078: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345074) {
            ctx->pc = 0x345138u;
            goto label_345138;
        }
    }
    ctx->pc = 0x34507Cu;
    // 0x34507c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x34507cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345080: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x345080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345084: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x345084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34508c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34508cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345090: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x345090u;
    SET_GPR_U32(ctx, 31, 0x345098u);
    ctx->pc = 0x345094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345090u;
    // 0x345094: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x345090u, 0x345098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345098u;
label_345098:
    // 0x345098: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x345098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34509c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34509cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3450a0: 0x298c0  sll         $s3, $v0, 3
    ctx->pc = 0x3450a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3450a4: 0x2463f4d0  addiu       $v1, $v1, -0xB30
    ctx->pc = 0x3450a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964432));
    // 0x3450a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3450a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3450ac: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3450acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3450b0: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x3450b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3450b4: 0x2442f4d2  addiu       $v0, $v0, -0xB2E
    ctx->pc = 0x3450b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964434));
    // 0x3450b8: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x3450b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3450bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3450bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3450c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3450c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3450c4: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x3450c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x3450c8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3450c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3450cc: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x3450ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3450d0: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x3450d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3450d4: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3450d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3450d8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3450d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3450dc: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3450DCu;
    SET_GPR_U32(ctx, 31, 0x3450E4u);
    ctx->pc = 0x3450E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3450DCu;
    // 0x3450e0: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3450DCu, 0x3450E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450E4u;
label_3450e4:
    // 0x3450e4: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3450e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3450e8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3450e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3450ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3450ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3450f0: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x3450f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x3450f4: 0xae030558  sw          $v1, 0x558($s0)
    ctx->pc = 0x3450f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 3));
    // 0x3450f8: 0x2442f4d4  addiu       $v0, $v0, -0xB2C
    ctx->pc = 0x3450f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964436));
    // 0x3450fc: 0xa217055c  sb          $s7, 0x55C($s0)
    ctx->pc = 0x3450fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1372), (uint8_t)GPR_U32(ctx, 23));
    // 0x345100: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x345100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x345104: 0xa211055d  sb          $s1, 0x55D($s0)
    ctx->pc = 0x345104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1373), (uint8_t)GPR_U32(ctx, 17));
    // 0x345108: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x345108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x34510c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x34510cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x345110: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x345110u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x345114: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x345114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345118: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x345118u;
    SET_GPR_U32(ctx, 31, 0x345120u);
    ctx->pc = 0x34511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345118u;
    // 0x34511c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x345118u, 0x345120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345120u;
label_345120:
    // 0x345120: 0xc096e44  jal         func_25B910
    ctx->pc = 0x345120u;
    SET_GPR_U32(ctx, 31, 0x345128u);
    ctx->pc = 0x345124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345120u;
    // 0x345124: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x345120u, 0x345128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345128u;
label_345128:
    // 0x345128: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x345128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x34512c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34512Cu;
    {
        const bool branch_taken_0x34512c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34512Cu;
        // 0x345130: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34512c) {
            ctx->pc = 0x345140u;
            goto label_345140;
        }
    }
    ctx->pc = 0x345134u;
    // 0x345134: 0x0  nop
    ctx->pc = 0x345134u;
    // NOP
label_345138:
    // 0x345138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34513c: 0x0  nop
    ctx->pc = 0x34513cu;
    // NOP
label_345140:
    // 0x345140: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x345140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x345144: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x345144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x345148: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x345148u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34514c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34514cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x345150: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x345150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x345154: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x345154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x345158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34515c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34515cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345164: 0x3e00008  jr          $ra
    ctx->pc = 0x345164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345164u;
        // 0x345168: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34516Cu;
}
