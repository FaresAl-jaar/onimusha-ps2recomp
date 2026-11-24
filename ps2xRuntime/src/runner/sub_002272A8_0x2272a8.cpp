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

// Function: sub_002272A8
// Address: 0x2272a8 - 0x2273d8
void sub_002272A8_0x2272a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002272A8_0x2272a8");
#endif

    switch (ctx->pc) {
        case 0x2272e8u: goto label_2272e8;
        case 0x2272f4u: goto label_2272f4;
        default: break;
    }

    ctx->pc = 0x2272a8u;

    // 0x2272a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2272a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2272ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2272acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2272b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2272b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2272b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2272b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2272b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2272bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2272c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2272c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2272c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2272c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2272c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2272ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2272d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2272d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2272d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2272D4u;
    {
        const bool branch_taken_0x2272d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2272D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272D4u;
        // 0x2272d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272d4) {
            ctx->pc = 0x2272ECu;
            goto label_2272ec;
        }
    }
    ctx->pc = 0x2272DCu;
    // 0x2272dc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2272dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2272e0: 0xc0897c8  jal         func_225F20
    ctx->pc = 0x2272E0u;
    SET_GPR_U32(ctx, 31, 0x2272E8u);
    ctx->pc = 0x2272E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272E0u;
    // 0x2272e4: 0x24a59460  addiu       $a1, $a1, -0x6BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F20u, 0x2272E0u, 0x2272E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272E8u;
label_2272e8:
    // 0x2272e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2272e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2272ec:
    // 0x2272ec: 0xc089c5a  jal         func_227168
    ctx->pc = 0x2272ECu;
    SET_GPR_U32(ctx, 31, 0x2272F4u);
    ctx->pc = 0x2272F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272ECu;
    // 0x2272f0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227168u, 0x2272ECu, 0x2272F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272F4u;
label_2272f4:
    // 0x2272f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2272f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2272f8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2272f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2272fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2272fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227304: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227308: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x227308u;
    {
        const bool branch_taken_0x227308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227308u;
        // 0x22730c: 0x24c69468  addiu       $a2, $a2, -0x6B98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227308) {
            ctx->pc = 0x227330u;
            goto label_227330;
        }
    }
    ctx->pc = 0x227310u;
    // 0x227310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227318: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x227318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22731c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22731cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x227320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227324: 0x80898b2  j           func_2262C8
    ctx->pc = 0x227324u;
    ctx->pc = 0x227328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227324u;
    // 0x227328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    sub_002262C8_0x2262c8(rdram, ctx, runtime); return;
    ctx->pc = 0x22732Cu;
    // 0x22732c: 0x0  nop
    ctx->pc = 0x22732cu;
    // NOP
label_227330:
    // 0x227330: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x227330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x227334: 0x10670012  beq         $v1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x227334u;
    {
        const bool branch_taken_0x227334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x227338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227334u;
        // 0x227338: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227334) {
            ctx->pc = 0x227380u;
            goto label_227380;
        }
    }
    ctx->pc = 0x22733Cu;
    // 0x22733c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x22733Cu;
    {
        const bool branch_taken_0x22733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22733Cu;
        // 0x227340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22733c) {
            ctx->pc = 0x2273B0u;
            goto label_2273b0;
        }
    }
    ctx->pc = 0x227344u;
    // 0x227344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x227344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x227348: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x227348u;
    {
        const bool branch_taken_0x227348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227348) {
            ctx->pc = 0x22734Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227348u;
            // 0x22734c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2273B4u;
            goto label_2273b4;
        }
    }
    ctx->pc = 0x227350u;
    // 0x227350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227358: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22735c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22735cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227360: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x227360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227364: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x227364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227368: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x227368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22736c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22736cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x227370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227374: 0x8089cf6  j           func_2273D8
    ctx->pc = 0x227374u;
    ctx->pc = 0x227378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227374u;
    // 0x227378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2273D8u;
    sub_002273D8_0x2273d8(rdram, ctx, runtime); return;
    ctx->pc = 0x22737Cu;
    // 0x22737c: 0x0  nop
    ctx->pc = 0x22737cu;
    // NOP
label_227380:
    // 0x227380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227388: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22738c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22738cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227390: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x227390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227394: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x227394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227398: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x227398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22739c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22739cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2273a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2273a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2273a4: 0x8089d50  j           func_227540
    ctx->pc = 0x2273A4u;
    ctx->pc = 0x2273A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273A4u;
    // 0x2273a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227540u;
    sub_00227540_0x227540(rdram, ctx, runtime); return;
    ctx->pc = 0x2273ACu;
    // 0x2273ac: 0x0  nop
    ctx->pc = 0x2273acu;
    // NOP
label_2273b0:
    // 0x2273b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2273b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2273b4:
    // 0x2273b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2273b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2273b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2273bc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2273bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2273c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2273c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2273c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2273c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2273c8: 0x24c69498  addiu       $a2, $a2, -0x6B68
    ctx->pc = 0x2273c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939800));
    // 0x2273cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2273ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2273d0: 0x80898b2  j           func_2262C8
    ctx->pc = 0x2273D0u;
    ctx->pc = 0x2273D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273D0u;
    // 0x2273d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    sub_002262C8_0x2262c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2273D8u;
}
