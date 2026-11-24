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

// Function: sub_0025E410
// Address: 0x25e410 - 0x25e4cc
void sub_0025E410_0x25e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E410_0x25e410");
#endif

    switch (ctx->pc) {
        case 0x25e44cu: goto label_25e44c;
        default: break;
    }

    ctx->pc = 0x25e410u;

    // 0x25e410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e414: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x25e414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25e418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e41c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x25e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x25e420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e424: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x25e424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25e428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e42c: 0x24632870  addiu       $v1, $v1, 0x2870
    ctx->pc = 0x25e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10352));
    // 0x25e430: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x25e430u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25e434: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x25e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x25e438: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25e438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e43c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e444: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x25E444u;
    SET_GPR_U32(ctx, 31, 0x25E44Cu);
    ctx->pc = 0x25E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E444u;
    // 0x25e448: 0xa4430002  sh          $v1, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x25E444u, 0x25E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E44Cu;
label_25e44c:
    // 0x25e44c: 0x8e2829c0  lw          $t0, 0x29C0($s1)
    ctx->pc = 0x25e44cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x25e450: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x25e450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x25e454: 0x24632874  addiu       $v1, $v1, 0x2874
    ctx->pc = 0x25e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10356));
    // 0x25e458: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x25e458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e45c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x25e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x25e460: 0x24632878  addiu       $v1, $v1, 0x2878
    ctx->pc = 0x25e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10360));
    // 0x25e464: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e468: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x25e468u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e46c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x25e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x25e470: 0x94e70000  lhu         $a3, 0x0($a3)
    ctx->pc = 0x25e470u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25e474: 0x24632882  addiu       $v1, $v1, 0x2882
    ctx->pc = 0x25e474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10370));
    // 0x25e478: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x25e478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e47c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x25e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x25e480: 0x2463287a  addiu       $v1, $v1, 0x287A
    ctx->pc = 0x25e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10362));
    // 0x25e484: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x25e484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e488: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x25e488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x25e48c: 0xa62729d6  sh          $a3, 0x29D6($s1)
    ctx->pc = 0x25e48cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10710), (uint16_t)GPR_U32(ctx, 7));
    // 0x25e490: 0x24632881  addiu       $v1, $v1, 0x2881
    ctx->pc = 0x25e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10369));
    // 0x25e494: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x25e494u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25e498: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25e498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e49c: 0xa62629d8  sh          $a2, 0x29D8($s1)
    ctx->pc = 0x25e49cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10712), (uint16_t)GPR_U32(ctx, 6));
    // 0x25e4a0: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x25e4a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25e4a4: 0xa62529da  sh          $a1, 0x29DA($s1)
    ctx->pc = 0x25e4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10714), (uint16_t)GPR_U32(ctx, 5));
    // 0x25e4a8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x25e4a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25e4ac: 0xa2242b06  sb          $a0, 0x2B06($s1)
    ctx->pc = 0x25e4acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11014), (uint8_t)GPR_U32(ctx, 4));
    // 0x25e4b0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25e4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e4b4: 0xa22329dd  sb          $v1, 0x29DD($s1)
    ctx->pc = 0x25e4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10717), (uint8_t)GPR_U32(ctx, 3));
    // 0x25e4b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x25E4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4C4u;
        // 0x25e4c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E4CCu;
}
