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

// Function: sub_002478C0
// Address: 0x2478c0 - 0x247a30
void sub_002478C0_0x2478c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002478C0_0x2478c0");
#endif

    switch (ctx->pc) {
        case 0x2478c0u: goto label_2478c0;
        case 0x2478c4u: goto label_2478c4;
        case 0x2478c8u: goto label_2478c8;
        case 0x2478ccu: goto label_2478cc;
        case 0x2478d0u: goto label_2478d0;
        case 0x2478d4u: goto label_2478d4;
        case 0x2478d8u: goto label_2478d8;
        case 0x2478dcu: goto label_2478dc;
        case 0x2478e0u: goto label_2478e0;
        case 0x2478e4u: goto label_2478e4;
        case 0x2478e8u: goto label_2478e8;
        case 0x2478ecu: goto label_2478ec;
        case 0x2478f0u: goto label_2478f0;
        case 0x2478f4u: goto label_2478f4;
        case 0x2478f8u: goto label_2478f8;
        case 0x2478fcu: goto label_2478fc;
        case 0x247900u: goto label_247900;
        case 0x247904u: goto label_247904;
        case 0x247908u: goto label_247908;
        case 0x24790cu: goto label_24790c;
        case 0x247910u: goto label_247910;
        case 0x247914u: goto label_247914;
        case 0x247918u: goto label_247918;
        case 0x24791cu: goto label_24791c;
        case 0x247920u: goto label_247920;
        case 0x247924u: goto label_247924;
        case 0x247928u: goto label_247928;
        case 0x24792cu: goto label_24792c;
        case 0x247930u: goto label_247930;
        case 0x247934u: goto label_247934;
        case 0x247938u: goto label_247938;
        case 0x24793cu: goto label_24793c;
        case 0x247940u: goto label_247940;
        case 0x247944u: goto label_247944;
        case 0x247948u: goto label_247948;
        case 0x24794cu: goto label_24794c;
        case 0x247950u: goto label_247950;
        case 0x247954u: goto label_247954;
        case 0x247958u: goto label_247958;
        case 0x24795cu: goto label_24795c;
        case 0x247960u: goto label_247960;
        case 0x247964u: goto label_247964;
        case 0x247968u: goto label_247968;
        case 0x24796cu: goto label_24796c;
        case 0x247970u: goto label_247970;
        case 0x247974u: goto label_247974;
        case 0x247978u: goto label_247978;
        case 0x24797cu: goto label_24797c;
        case 0x247980u: goto label_247980;
        case 0x247984u: goto label_247984;
        case 0x247988u: goto label_247988;
        case 0x24798cu: goto label_24798c;
        case 0x247990u: goto label_247990;
        case 0x247994u: goto label_247994;
        case 0x247998u: goto label_247998;
        case 0x24799cu: goto label_24799c;
        case 0x2479a0u: goto label_2479a0;
        case 0x2479a4u: goto label_2479a4;
        case 0x2479a8u: goto label_2479a8;
        case 0x2479acu: goto label_2479ac;
        case 0x2479b0u: goto label_2479b0;
        case 0x2479b4u: goto label_2479b4;
        case 0x2479b8u: goto label_2479b8;
        case 0x2479bcu: goto label_2479bc;
        case 0x2479c0u: goto label_2479c0;
        case 0x2479c4u: goto label_2479c4;
        case 0x2479c8u: goto label_2479c8;
        case 0x2479ccu: goto label_2479cc;
        case 0x2479d0u: goto label_2479d0;
        case 0x2479d4u: goto label_2479d4;
        case 0x2479d8u: goto label_2479d8;
        case 0x2479dcu: goto label_2479dc;
        case 0x2479e0u: goto label_2479e0;
        case 0x2479e4u: goto label_2479e4;
        case 0x2479e8u: goto label_2479e8;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f0u: goto label_2479f0;
        case 0x2479f4u: goto label_2479f4;
        case 0x2479f8u: goto label_2479f8;
        case 0x2479fcu: goto label_2479fc;
        case 0x247a00u: goto label_247a00;
        case 0x247a04u: goto label_247a04;
        case 0x247a08u: goto label_247a08;
        case 0x247a0cu: goto label_247a0c;
        case 0x247a10u: goto label_247a10;
        case 0x247a14u: goto label_247a14;
        case 0x247a18u: goto label_247a18;
        case 0x247a1cu: goto label_247a1c;
        case 0x247a20u: goto label_247a20;
        case 0x247a24u: goto label_247a24;
        case 0x247a28u: goto label_247a28;
        case 0x247a2cu: goto label_247a2c;
        default: break;
    }

    ctx->pc = 0x2478c0u;

label_2478c0:
    // 0x2478c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2478c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2478c4:
    // 0x2478c4: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_2478c8:
    // 0x2478c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2478c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2478cc:
    // 0x2478cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2478ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2478d0:
    // 0x2478d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2478d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2478d4:
    // 0x2478d4: 0x2463f238  addiu       $v1, $v1, -0xDC8
    ctx->pc = 0x2478d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963768));
label_2478d8:
    // 0x2478d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2478d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2478dc:
    // 0x2478dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2478dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2478e0:
    // 0x2478e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2478e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2478e4:
    // 0x2478e4: 0x82050001  lb          $a1, 0x1($s0)
    ctx->pc = 0x2478e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2478e8:
    // 0x2478e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2478e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2478ec:
    // 0x2478ec: 0x14a40016  bne         $a1, $a0, . + 4 + (0x16 << 2)
label_2478f0:
    if (ctx->pc == 0x2478F0u) {
        ctx->pc = 0x2478F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478ECu;
        // 0x2478f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2478F4u;
        goto label_2478f4;
    }
    ctx->pc = 0x2478ECu;
    {
        const bool branch_taken_0x2478ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2478F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478ECu;
        // 0x2478f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478ec) {
            ctx->pc = 0x247948u;
            goto label_247948;
        }
    }
    ctx->pc = 0x2478F4u;
label_2478f4:
    // 0x2478f4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2478f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2478f8:
    // 0x2478f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2478f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2478fc:
    // 0x2478fc: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2478fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_247900:
    // 0x247900: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x247900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_247904:
    // 0x247904: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_247908:
    if (ctx->pc == 0x247908u) {
        ctx->pc = 0x247908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247904u;
        // 0x247908: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24790Cu;
        goto label_24790c;
    }
    ctx->pc = 0x247904u;
    {
        const bool branch_taken_0x247904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247904) {
            ctx->pc = 0x247908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247904u;
            // 0x247908: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24794Cu;
            goto label_24794c;
        }
    }
    ctx->pc = 0x24790Cu;
label_24790c:
    // 0x24790c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_247910:
    // 0x247910: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x247910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_247914:
    // 0x247914: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x247914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247918:
    // 0x247918: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x247918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24791c:
    // 0x24791c: 0xc043a86  jal         func_10EA18
label_247920:
    if (ctx->pc == 0x247920u) {
        ctx->pc = 0x247920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24791Cu;
        // 0x247920: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247924u;
        goto label_247924;
    }
    ctx->pc = 0x24791Cu;
    SET_GPR_U32(ctx, 31, 0x247924u);
    ctx->pc = 0x247920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24791Cu;
    // 0x247920: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA18u, 0x24791Cu, 0x247924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247924u;
label_247924:
    // 0x247924: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x247924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_247928:
    // 0x247928: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x247928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_24792c:
    // 0x24792c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_247930:
    // 0x247930: 0x60f809  jalr        $v1
label_247934:
    if (ctx->pc == 0x247934u) {
        ctx->pc = 0x247934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247930u;
        // 0x247934: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247938u;
        goto label_247938;
    }
    ctx->pc = 0x247930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247938u);
        ctx->pc = 0x247934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247930u;
        // 0x247934: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247930u, 0x247938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247938u;
label_247938:
    // 0x247938: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x247938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24793c:
    // 0x24793c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x24793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_247940:
    // 0x247940: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x247940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_247944:
    // 0x247944: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x247944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_247948:
    // 0x247948: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x247948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24794c:
    // 0x24794c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x24794cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_247950:
    // 0x247950: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x247950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_247954:
    // 0x247954: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x247954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_247958:
    // 0x247958: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x247958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24795c:
    // 0x24795c: 0x54440030  bnel        $v0, $a0, . + 4 + (0x30 << 2)
label_247960:
    if (ctx->pc == 0x247960u) {
        ctx->pc = 0x247960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24795Cu;
        // 0x247960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247964u;
        goto label_247964;
    }
    ctx->pc = 0x24795Cu;
    {
        const bool branch_taken_0x24795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x24795c) {
            ctx->pc = 0x247960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24795Cu;
            // 0x247960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247A20u;
            goto label_247a20;
        }
    }
    ctx->pc = 0x247964u;
label_247964:
    // 0x247964: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_247968:
    // 0x247968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x247968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24796c:
    // 0x24796c: 0x8c43f22c  lw          $v1, -0xDD4($v0)
    ctx->pc = 0x24796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963756)));
label_247970:
    // 0x247970: 0x5464002b  bnel        $v1, $a0, . + 4 + (0x2B << 2)
label_247974:
    if (ctx->pc == 0x247974u) {
        ctx->pc = 0x247974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247970u;
        // 0x247974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247978u;
        goto label_247978;
    }
    ctx->pc = 0x247970u;
    {
        const bool branch_taken_0x247970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x247970) {
            ctx->pc = 0x247974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247970u;
            // 0x247974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247A20u;
            goto label_247a20;
        }
    }
    ctx->pc = 0x247978u;
label_247978:
    // 0x247978: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x247978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24797c:
    // 0x24797c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x24797cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_247980:
    // 0x247980: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x247980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_247984:
    // 0x247984: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x247984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_247988:
    // 0x247988: 0x40f809  jalr        $v0
label_24798c:
    if (ctx->pc == 0x24798Cu) {
        ctx->pc = 0x24798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247988u;
        // 0x24798c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247990u;
        goto label_247990;
    }
    ctx->pc = 0x247988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247990u);
        ctx->pc = 0x24798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247988u;
        // 0x24798c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247988u, 0x247990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247990u;
label_247990:
    // 0x247990: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x247990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_247994:
    // 0x247994: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x247994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_247998:
    // 0x247998: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x247998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24799c:
    // 0x24799c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2479a0:
    // 0x2479a0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2479a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2479a4:
    // 0x2479a4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x2479a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_2479a8:
    // 0x2479a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2479a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2479ac:
    // 0x2479ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2479acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2479b0:
    // 0x2479b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2479b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2479b4:
    // 0x2479b4: 0xc043a36  jal         func_10E8D8
label_2479b8:
    if (ctx->pc == 0x2479B8u) {
        ctx->pc = 0x2479B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479B4u;
        // 0x2479b8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2479BCu;
        goto label_2479bc;
    }
    ctx->pc = 0x2479B4u;
    SET_GPR_U32(ctx, 31, 0x2479BCu);
    ctx->pc = 0x2479B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479B4u;
    // 0x2479b8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x2479B4u, 0x2479BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479BCu;
label_2479bc:
    // 0x2479bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2479bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2479c0:
    // 0x2479c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2479c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2479c4:
    // 0x2479c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2479c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2479c8:
    // 0x2479c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2479c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2479cc:
    // 0x2479cc: 0xc043a86  jal         func_10EA18
label_2479d0:
    if (ctx->pc == 0x2479D0u) {
        ctx->pc = 0x2479D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479CCu;
        // 0x2479d0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2479D4u;
        goto label_2479d4;
    }
    ctx->pc = 0x2479CCu;
    SET_GPR_U32(ctx, 31, 0x2479D4u);
    ctx->pc = 0x2479D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479CCu;
    // 0x2479d0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA18u, 0x2479CCu, 0x2479D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479D4u;
label_2479d4:
    // 0x2479d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2479d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2479d8:
    // 0x2479d8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2479d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_2479dc:
    // 0x2479dc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2479dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2479e0:
    // 0x2479e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2479e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2479e4:
    // 0x2479e4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2479e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2479e8:
    // 0x2479e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2479e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2479ec:
    // 0x2479ec: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x2479ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_2479f0:
    // 0x2479f0: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2479f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_2479f4:
    // 0x2479f4: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x2479f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_2479f8:
    // 0x2479f8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2479f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2479fc:
    // 0x2479fc: 0x0  nop
    ctx->pc = 0x2479fcu;
    // NOP
label_247a00:
    // 0x247a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247a04:
    // 0x247a04: 0xc0438e8  jal         func_10E3A0
label_247a08:
    if (ctx->pc == 0x247A08u) {
        ctx->pc = 0x247A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A04u;
        // 0x247a08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247A0Cu;
        goto label_247a0c;
    }
    ctx->pc = 0x247A04u;
    SET_GPR_U32(ctx, 31, 0x247A0Cu);
    ctx->pc = 0x247A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A04u;
    // 0x247a08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3A0u, 0x247A04u, 0x247A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A0Cu;
label_247a0c:
    // 0x247a0c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
label_247a10:
    if (ctx->pc == 0x247A10u) {
        ctx->pc = 0x247A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A0Cu;
        // 0x247a10: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247A14u;
        goto label_247a14;
    }
    ctx->pc = 0x247A0Cu;
    {
        const bool branch_taken_0x247a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A0Cu;
        // 0x247a10: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a0c) {
            ctx->pc = 0x247A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247a00;
        }
    }
    ctx->pc = 0x247A14u;
label_247a14:
    // 0x247a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247a18:
    // 0x247a18: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x247a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_247a1c:
    // 0x247a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247a20:
    // 0x247a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_247a24:
    // 0x247a24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_247a28:
    // 0x247a28: 0x3e00008  jr          $ra
label_247a2c:
    if (ctx->pc == 0x247A2Cu) {
        ctx->pc = 0x247A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A28u;
        // 0x247a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247A30u;
        goto label_fallthrough_0x247a28;
    }
    ctx->pc = 0x247A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A28u;
        // 0x247a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x247a28:
    ctx->pc = 0x247A30u;
}
