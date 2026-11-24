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

// Function: sub_00352890
// Address: 0x352890 - 0x352aa0
void sub_00352890_0x352890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352890_0x352890");
#endif

    switch (ctx->pc) {
        case 0x3528f8u: goto label_3528f8;
        case 0x352920u: goto label_352920;
        case 0x35294cu: goto label_35294c;
        case 0x3529b8u: goto label_3529b8;
        case 0x352a54u: goto label_352a54;
        default: break;
    }

    ctx->pc = 0x352890u;

    // 0x352890: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x352890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x352894: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x352894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x352898: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x352898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x35289c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3528a0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3528a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3528a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3528a8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3528a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3528acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3528b0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3528b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3528b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3528b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3528b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3528bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3528c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3528c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3528c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3528c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3528c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528cc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3528ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3528d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3528d4: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x3528d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x3528d8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3528d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3528dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3528e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3528e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528e8: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3528e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3528ec: 0x25082820  addiu       $t0, $t0, 0x2820
    ctx->pc = 0x3528ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10272));
    // 0x3528f0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3528F0u;
    SET_GPR_U32(ctx, 31, 0x3528F8u);
    ctx->pc = 0x3528F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3528F0u;
    // 0x3528f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3528F0u, 0x3528F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3528F8u;
label_3528f8:
    // 0x3528f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3528f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528fc: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x3528FCu;
    {
        const bool branch_taken_0x3528fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x352900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3528FCu;
        // 0x352900: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3528fc) {
            ctx->pc = 0x352A68u;
            goto label_352a68;
        }
    }
    ctx->pc = 0x352904u;
    // 0x352904: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x352904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x352908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35290c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x352910: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x352910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x352914: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x352914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352918: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x352918u;
    SET_GPR_U32(ctx, 31, 0x352920u);
    ctx->pc = 0x35291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352918u;
    // 0x35291c: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x352918u, 0x352920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352920u;
label_352920:
    // 0x352920: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x352920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x352924: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x352924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x352928: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x352928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x35292c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35292cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352930: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x352930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x352934: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x352934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x352938: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x352938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x35293c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352940: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x352940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x352944: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x352944u;
    SET_GPR_U32(ctx, 31, 0x35294Cu);
    ctx->pc = 0x352948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352944u;
    // 0x352948: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x352944u, 0x35294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35294Cu;
label_35294c:
    // 0x35294c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x35294cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x352950: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x352954: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x352954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x352958: 0xa21e0558  sb          $fp, 0x558($s0)
    ctx->pc = 0x352958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 30));
    // 0x35295c: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x35295cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x352960: 0x92820820  lbu         $v0, 0x820($s4)
    ctx->pc = 0x352960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2080)));
    // 0x352964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x352964u;
    {
        const bool branch_taken_0x352964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352964) {
            ctx->pc = 0x352978u;
            goto label_352978;
        }
    }
    ctx->pc = 0x35296Cu;
    // 0x35296c: 0x7a820810  lq          $v0, 0x810($s4)
    ctx->pc = 0x35296cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x352970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x352970u;
    {
        const bool branch_taken_0x352970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352970u;
        // 0x352974: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352970) {
            ctx->pc = 0x352980u;
            goto label_352980;
        }
    }
    ctx->pc = 0x352978u;
label_352978:
    // 0x352978: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x352978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x35297c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x35297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_352980:
    // 0x352980: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x352980u;
    {
        const bool branch_taken_0x352980 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x352980) {
            ctx->pc = 0x3529B8u;
            goto label_3529b8;
        }
    }
    ctx->pc = 0x352988u;
    // 0x352988: 0x92620733  lbu         $v0, 0x733($s3)
    ctx->pc = 0x352988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1843)));
    // 0x35298c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x35298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x352990: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x352990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x352994: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x352994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x352998: 0x90650730  lbu         $a1, 0x730($v1)
    ctx->pc = 0x352998u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x35299c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35299cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3529a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3529a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3529a4: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x3529a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x3529a8: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x3529a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x3529ac: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3529acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3529b0: 0xc041442  jal         func_105108
    ctx->pc = 0x3529B0u;
    SET_GPR_U32(ctx, 31, 0x3529B8u);
    ctx->pc = 0x3529B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3529B0u;
    // 0x3529b4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3529B0u, 0x3529B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3529B8u;
label_3529b8:
    // 0x3529b8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3529b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3529bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3529bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3529c0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3529c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3529c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3529c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3529c8: 0x2484f870  addiu       $a0, $a0, -0x790
    ctx->pc = 0x3529c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965360));
    // 0x3529cc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3529ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3529d0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x3529d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3529d4: 0x2463f874  addiu       $v1, $v1, -0x78C
    ctx->pc = 0x3529d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965364));
    // 0x3529d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3529d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3529dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3529dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3529e0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x3529e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x3529e4: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x3529e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3529e8: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x3529e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3529ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3529ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3529f0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3529f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3529f4: 0x2442f878  addiu       $v0, $v0, -0x788
    ctx->pc = 0x3529f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965368));
    // 0x3529f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3529f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3529fc: 0x460c6841  sub.s       $f1, $f13, $f12
    ctx->pc = 0x3529fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x352a00: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x352a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352a04: 0x46010383  div.s       $f14, $f0, $f1
    ctx->pc = 0x352a04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x352a08: 0x0  nop
    ctx->pc = 0x352a08u;
    // NOP
    // 0x352a0c: 0x0  nop
    ctx->pc = 0x352a0cu;
    // NOP
    // 0x352a10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x352A10u;
    {
        const bool branch_taken_0x352a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352a10) {
            ctx->pc = 0x352A30u;
            goto label_352a30;
        }
    }
    ctx->pc = 0x352A18u;
    // 0x352a18: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x352A18u;
    {
        const bool branch_taken_0x352a18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x352A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A18u;
        // 0x352a1c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a18) {
            ctx->pc = 0x352A28u;
            goto label_352a28;
        }
    }
    ctx->pc = 0x352A20u;
    // 0x352a20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x352A20u;
    {
        const bool branch_taken_0x352a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A20u;
        // 0x352a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a20) {
            ctx->pc = 0x352A34u;
            goto label_352a34;
        }
    }
    ctx->pc = 0x352A28u;
label_352a28:
    // 0x352a28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x352A28u;
    {
        const bool branch_taken_0x352a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A28u;
        // 0x352a2c: 0xc68f0024  lwc1        $f15, 0x24($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a28) {
            ctx->pc = 0x352A38u;
            goto label_352a38;
        }
    }
    ctx->pc = 0x352A30u;
label_352a30:
    // 0x352a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352a34:
    // 0x352a34: 0xc68f0024  lwc1        $f15, 0x24($s4)
    ctx->pc = 0x352a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_352a38:
    // 0x352a38: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x352a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x352a3c: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x352a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x352a40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x352a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352a44: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x352a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x352a48: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x352a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x352a4c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x352A4Cu;
    SET_GPR_U32(ctx, 31, 0x352A54u);
    ctx->pc = 0x352A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352A4Cu;
    // 0x352a50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x352A4Cu, 0x352A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352A54u;
label_352a54:
    // 0x352a54: 0x3c02c475  lui         $v0, 0xC475
    ctx->pc = 0x352a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50293 << 16));
    // 0x352a58: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x352a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x352a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x352A5Cu;
    {
        const bool branch_taken_0x352a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A5Cu;
        // 0x352a60: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a5c) {
            ctx->pc = 0x352A70u;
            goto label_352a70;
        }
    }
    ctx->pc = 0x352A64u;
    // 0x352a64: 0x0  nop
    ctx->pc = 0x352a64u;
    // NOP
label_352a68:
    // 0x352a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352a6c: 0x0  nop
    ctx->pc = 0x352a6cu;
    // NOP
label_352a70:
    // 0x352a70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x352a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x352a74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x352a74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x352a78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x352a78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x352a7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x352a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x352a80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x352a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x352a84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x352a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352a88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x352a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352a8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x352a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x352a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352a98: 0x3e00008  jr          $ra
    ctx->pc = 0x352A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A98u;
        // 0x352a9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352AA0u;
}
