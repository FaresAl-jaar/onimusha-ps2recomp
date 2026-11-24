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

// Function: sub_00352F40
// Address: 0x352f40 - 0x3530cc
void sub_00352F40_0x352f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352F40_0x352f40");
#endif

    switch (ctx->pc) {
        case 0x352fa0u: goto label_352fa0;
        case 0x352fc8u: goto label_352fc8;
        case 0x353010u: goto label_353010;
        case 0x35303cu: goto label_35303c;
        case 0x353074u: goto label_353074;
        case 0x353090u: goto label_353090;
        default: break;
    }

    ctx->pc = 0x352f40u;

    // 0x352f40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x352f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x352f44: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x352f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x352f48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x352f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x352f4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x352f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x352f50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x352f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x352f54: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x352f54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x352f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x352f5c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x352f5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x352f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x352f64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x352f64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x352f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x352f6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x352f6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x352f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x352f74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x352f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f78: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x352f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x352f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x352f80: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x352f80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x352f84: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x352f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x352f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f94: 0x25082ed0  addiu       $t0, $t0, 0x2ED0
    ctx->pc = 0x352f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11984));
    // 0x352f98: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x352F98u;
    SET_GPR_U32(ctx, 31, 0x352FA0u);
    ctx->pc = 0x352F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F98u;
    // 0x352f9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x352F98u, 0x352FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352FA0u;
label_352fa0:
    // 0x352fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x352fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352fa4: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x352FA4u;
    {
        const bool branch_taken_0x352fa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x352FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352FA4u;
        // 0x352fa8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352fa4) {
            ctx->pc = 0x353098u;
            goto label_353098;
        }
    }
    ctx->pc = 0x352FACu;
    // 0x352fac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x352facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352fb0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x352fb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352fb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x352fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x352fbc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x352fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x352fc0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x352FC0u;
    SET_GPR_U32(ctx, 31, 0x352FC8u);
    ctx->pc = 0x352FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352FC0u;
    // 0x352fc4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x352FC0u, 0x352FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352FC8u;
label_352fc8:
    // 0x352fc8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x352fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x352fcc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x352fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x352fd0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x352fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x352fd4: 0x2484f880  addiu       $a0, $a0, -0x780
    ctx->pc = 0x352fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965376));
    // 0x352fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x352fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x352fdc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x352fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x352fe0: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x352fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x352fe4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x352fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x352fe8: 0x923021  addu        $a2, $a0, $s2
    ctx->pc = 0x352fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x352fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352ff0: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x352ff0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352ff8: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x352ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x352ffc: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x352ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x353000: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x353000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x353004: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x353004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x353008: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x353008u;
    SET_GPR_U32(ctx, 31, 0x353010u);
    ctx->pc = 0x35300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353008u;
    // 0x35300c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x353008u, 0x353010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353010u;
label_353010:
    // 0x353010: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x353010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x353014: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x353014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x353018: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x353018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x35301c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x353020: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x353020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x353024: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x353024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353028: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x353028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x35302c: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x35302cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x353030: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x353030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x353034: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x353034u;
    SET_GPR_U32(ctx, 31, 0x35303Cu);
    ctx->pc = 0x353038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353034u;
    // 0x353038: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x353034u, 0x35303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35303Cu;
label_35303c:
    // 0x35303c: 0x92620820  lbu         $v0, 0x820($s3)
    ctx->pc = 0x35303cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2080)));
    // 0x353040: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x353040u;
    {
        const bool branch_taken_0x353040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353040u;
        // 0x353044: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353040) {
            ctx->pc = 0x35304Cu;
            goto label_35304c;
        }
    }
    ctx->pc = 0x353048u;
    // 0x353048: 0x26650810  addiu       $a1, $s3, 0x810
    ctx->pc = 0x353048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2064));
label_35304c:
    // 0x35304c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x35304cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x353050: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x353050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x353054: 0x2463f888  addiu       $v1, $v1, -0x778
    ctx->pc = 0x353054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965384));
    // 0x353058: 0x2442f88c  addiu       $v0, $v0, -0x774
    ctx->pc = 0x353058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965388));
    // 0x35305c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x35305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x353060: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x353060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x353064: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x353064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x353068: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x353068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x35306c: 0xc096f68  jal         func_25BDA0
    ctx->pc = 0x35306Cu;
    SET_GPR_U32(ctx, 31, 0x353074u);
    ctx->pc = 0x353070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35306Cu;
    // 0x353070: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BDA0u, 0x35306Cu, 0x353074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353074u;
label_353074:
    // 0x353074: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x353074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x353078: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x353078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x35307c: 0x2442f884  addiu       $v0, $v0, -0x77C
    ctx->pc = 0x35307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965380));
    // 0x353080: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x353080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x353084: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x353084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x353088: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x353088u;
    SET_GPR_U32(ctx, 31, 0x353090u);
    ctx->pc = 0x35308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353088u;
    // 0x35308c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x353088u, 0x353090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353090u;
label_353090:
    // 0x353090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x353090u;
    {
        const bool branch_taken_0x353090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353090u;
        // 0x353094: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353090) {
            ctx->pc = 0x3530A0u;
            goto label_3530a0;
        }
    }
    ctx->pc = 0x353098u;
label_353098:
    // 0x353098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35309c: 0x0  nop
    ctx->pc = 0x35309cu;
    // NOP
label_3530a0:
    // 0x3530a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3530a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3530a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3530a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3530a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3530a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3530ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3530acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3530b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3530b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3530b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3530b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3530b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3530b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3530bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3530bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3530c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3530c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3530c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3530C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3530C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3530C4u;
        // 0x3530c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3530C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3530CCu;
}
