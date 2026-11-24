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

// Function: sub_00292150
// Address: 0x292150 - 0x2925d4
void sub_00292150_0x292150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292150_0x292150");
#endif

    switch (ctx->pc) {
        case 0x292194u: goto label_292194;
        case 0x29219cu: goto label_29219c;
        case 0x2921b0u: goto label_2921b0;
        case 0x29220cu: goto label_29220c;
        case 0x29226cu: goto label_29226c;
        case 0x2922d4u: goto label_2922d4;
        case 0x2922ecu: goto label_2922ec;
        case 0x292334u: goto label_292334;
        case 0x292380u: goto label_292380;
        case 0x2923d4u: goto label_2923d4;
        case 0x2923ecu: goto label_2923ec;
        case 0x292434u: goto label_292434;
        case 0x292480u: goto label_292480;
        case 0x29250cu: goto label_29250c;
        case 0x292524u: goto label_292524;
        case 0x29256cu: goto label_29256c;
        case 0x2925b8u: goto label_2925b8;
        default: break;
    }

    ctx->pc = 0x292150u;

    // 0x292150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x292150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292154: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x292154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x292158: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x292158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29215c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x29215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x292160: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x292160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x292164: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x292168: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x292168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29216c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292174: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x292174u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x292178: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29217c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292180: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x292180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292184: 0x1220010c  beqz        $s1, . + 4 + (0x10C << 2)
    ctx->pc = 0x292184u;
    {
        const bool branch_taken_0x292184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x292184) {
            ctx->pc = 0x2925B8u;
            goto label_2925b8;
        }
    }
    ctx->pc = 0x29218Cu;
    // 0x29218c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x29218Cu;
    SET_GPR_U32(ctx, 31, 0x292194u);
    ctx->pc = 0x292190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29218Cu;
    // 0x292190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x29218Cu, 0x292194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292194u;
label_292194:
    // 0x292194: 0xc0b34d0  jal         func_2CD340
    ctx->pc = 0x292194u;
    SET_GPR_U32(ctx, 31, 0x29219Cu);
    ctx->pc = 0x2CD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD340u, 0x292194u, 0x29219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29219Cu;
label_29219c:
    // 0x29219c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2921a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2921a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921a4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2921a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2921a8: 0xc0a4760  jal         func_291D80
    ctx->pc = 0x2921A8u;
    SET_GPR_U32(ctx, 31, 0x2921B0u);
    ctx->pc = 0x2921ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921A8u;
    // 0x2921ac: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D80u, 0x2921A8u, 0x2921B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921B0u;
label_2921b0:
    // 0x2921b0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2921B0u;
    {
        const bool branch_taken_0x2921b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2921b0) {
            ctx->pc = 0x292218u;
            goto label_292218;
        }
    }
    ctx->pc = 0x2921B8u;
    // 0x2921b8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2921b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2921bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2921bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2921c0: 0x34700dcd  ori         $s0, $v1, 0xDCD
    ctx->pc = 0x2921c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2921c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2921c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2921c8: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2921c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2921cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2921ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2921d0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2921d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2921d4: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x2921d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2921d8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2921d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2921dc: 0x82622b06  lb          $v0, 0x2B06($s3)
    ctx->pc = 0x2921dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 11014)));
    // 0x2921e0: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x2921e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x2921e4: 0x8cc60094  lw          $a2, 0x94($a2)
    ctx->pc = 0x2921e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x2921e8: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2921ec: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x2921ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
    // 0x2921f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2921f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2921f4: 0x24630294  addiu       $v1, $v1, 0x294
    ctx->pc = 0x2921f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 660));
    // 0x2921f8: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2921f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2921fc: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x2921fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x292200: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x292200u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x292204: 0xc09ddfc  jal         func_2777F0
    ctx->pc = 0x292204u;
    SET_GPR_U32(ctx, 31, 0x29220Cu);
    ctx->pc = 0x292208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292204u;
    // 0x292208: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777F0u, 0x292204u, 0x29220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29220Cu;
label_29220c:
    // 0x29220c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29220Cu;
    {
        const bool branch_taken_0x29220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29220c) {
            ctx->pc = 0x292270u;
            goto label_292270;
        }
    }
    ctx->pc = 0x292214u;
    // 0x292214: 0x0  nop
    ctx->pc = 0x292214u;
    // NOP
label_292218:
    // 0x292218: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x292218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29221c: 0x34500dcd  ori         $s0, $v0, 0xDCD
    ctx->pc = 0x29221cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x292220: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x292220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292224: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292228: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x292228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29222c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292230: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x292230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x292234: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x292234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x292238: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x292238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x29223c: 0x82622b06  lb          $v0, 0x2B06($s3)
    ctx->pc = 0x29223cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 11014)));
    // 0x292240: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x292240u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x292244: 0x8cc60094  lw          $a2, 0x94($a2)
    ctx->pc = 0x292244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x292248: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x292248u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x29224c: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x29224cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
    // 0x292250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x292250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x292254: 0x24630294  addiu       $v1, $v1, 0x294
    ctx->pc = 0x292254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 660));
    // 0x292258: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x292258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29225c: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x29225cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x292260: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x292260u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x292264: 0xc09dda0  jal         func_277680
    ctx->pc = 0x292264u;
    SET_GPR_U32(ctx, 31, 0x29226Cu);
    ctx->pc = 0x292268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292264u;
    // 0x292268: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277680u, 0x292264u, 0x29226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29226Cu;
label_29226c:
    // 0x29226c: 0x0  nop
    ctx->pc = 0x29226cu;
    // NOP
label_292270:
    // 0x292270: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x292270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x292274: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x292274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x292278: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x292278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29227c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29227cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x292280: 0x96620286  lhu         $v0, 0x286($s3)
    ctx->pc = 0x292280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 646)));
    // 0x292284: 0x30420900  andi        $v0, $v0, 0x900
    ctx->pc = 0x292284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2304);
    // 0x292288: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x292288u;
    {
        const bool branch_taken_0x292288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292288) {
            ctx->pc = 0x2922E0u;
            goto label_2922e0;
        }
    }
    ctx->pc = 0x292290u;
    // 0x292290: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292294: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x292294u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x292298: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x292298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29229c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29229cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922a0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2922a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2922a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2922a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922a8: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2922a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2922ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2922acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2922b0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2922b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2922b4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2922b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2922b8: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x2922b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x2922bc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2922bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2922c0: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2922c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2922c4: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x2922c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x2922c8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2922c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2922cc: 0xc09dfbc  jal         func_277EF0
    ctx->pc = 0x2922CCu;
    SET_GPR_U32(ctx, 31, 0x2922D4u);
    ctx->pc = 0x2922D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2922CCu;
    // 0x2922d0: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EF0u, 0x2922CCu, 0x2922D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922D4u;
label_2922d4:
    // 0x2922d4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2922D4u;
    {
        const bool branch_taken_0x2922d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2922d4) {
            ctx->pc = 0x292380u;
            goto label_292380;
        }
    }
    ctx->pc = 0x2922DCu;
    // 0x2922dc: 0x0  nop
    ctx->pc = 0x2922dcu;
    // NOP
label_2922e0:
    // 0x2922e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2922e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922e4: 0xc0a69c8  jal         func_29A720
    ctx->pc = 0x2922E4u;
    SET_GPR_U32(ctx, 31, 0x2922ECu);
    ctx->pc = 0x2922E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2922E4u;
    // 0x2922e8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A720u, 0x2922E4u, 0x2922ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922ECu;
label_2922ec:
    // 0x2922ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2922ECu;
    {
        const bool branch_taken_0x2922ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2922ec) {
            ctx->pc = 0x292340u;
            goto label_292340;
        }
    }
    ctx->pc = 0x2922F4u;
    // 0x2922f4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2922f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2922f8: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x2922f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2922fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2922fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292300: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x292300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292304: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x292304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x292308: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x292308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29230c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292310: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x292310u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x292314: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292318: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x292318u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x29231c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x29231cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x292320: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x292320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x292324: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x292324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x292328: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x292328u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29232c: 0xc09e084  jal         func_278210
    ctx->pc = 0x29232Cu;
    SET_GPR_U32(ctx, 31, 0x292334u);
    ctx->pc = 0x292330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29232Cu;
    // 0x292330: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278210u, 0x29232Cu, 0x292334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292334u;
label_292334:
    // 0x292334: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x292334u;
    {
        const bool branch_taken_0x292334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292334) {
            ctx->pc = 0x292380u;
            goto label_292380;
        }
    }
    ctx->pc = 0x29233Cu;
    // 0x29233c: 0x0  nop
    ctx->pc = 0x29233cu;
    // NOP
label_292340:
    // 0x292340: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292344: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x292344u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x292348: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x292348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29234c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29234cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292350: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x292350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x292354: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x292354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29235c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x29235cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x292360: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292364: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x292364u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x292368: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x292368u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x29236c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x29236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x292370: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x292370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x292374: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x292374u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x292378: 0xc09defc  jal         func_277BF0
    ctx->pc = 0x292378u;
    SET_GPR_U32(ctx, 31, 0x292380u);
    ctx->pc = 0x29237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292378u;
    // 0x29237c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277BF0u, 0x292378u, 0x292380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292380u;
label_292380:
    // 0x292380: 0x96620286  lhu         $v0, 0x286($s3)
    ctx->pc = 0x292380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 646)));
    // 0x292384: 0x30420900  andi        $v0, $v0, 0x900
    ctx->pc = 0x292384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2304);
    // 0x292388: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x292388u;
    {
        const bool branch_taken_0x292388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292388) {
            ctx->pc = 0x2923E0u;
            goto label_2923e0;
        }
    }
    ctx->pc = 0x292390u;
    // 0x292390: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292394: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x292394u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x292398: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x292398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29239c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29239cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923a0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2923a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2923a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2923a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923a8: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2923a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2923ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2923acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2923b0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2923b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2923b4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2923b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2923b8: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x2923b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x2923bc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2923bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2923c0: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2923c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2923c4: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x2923c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x2923c8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2923c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2923cc: 0xc09dffc  jal         func_277FF0
    ctx->pc = 0x2923CCu;
    SET_GPR_U32(ctx, 31, 0x2923D4u);
    ctx->pc = 0x2923D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923CCu;
    // 0x2923d0: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277FF0u, 0x2923CCu, 0x2923D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923D4u;
label_2923d4:
    // 0x2923d4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2923D4u;
    {
        const bool branch_taken_0x2923d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923d4) {
            ctx->pc = 0x292480u;
            goto label_292480;
        }
    }
    ctx->pc = 0x2923DCu;
    // 0x2923dc: 0x0  nop
    ctx->pc = 0x2923dcu;
    // NOP
label_2923e0:
    // 0x2923e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2923e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923e4: 0xc0a69c8  jal         func_29A720
    ctx->pc = 0x2923E4u;
    SET_GPR_U32(ctx, 31, 0x2923ECu);
    ctx->pc = 0x2923E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2923E4u;
    // 0x2923e8: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A720u, 0x2923E4u, 0x2923ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2923ECu;
label_2923ec:
    // 0x2923ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2923ECu;
    {
        const bool branch_taken_0x2923ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2923ec) {
            ctx->pc = 0x292440u;
            goto label_292440;
        }
    }
    ctx->pc = 0x2923F4u;
    // 0x2923f4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2923f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2923f8: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x2923f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2923fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2923fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292400: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x292400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292404: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x292404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x292408: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x292408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29240c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292410: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x292410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x292414: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292418: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x292418u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x29241c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x29241cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x292420: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x292420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x292424: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x292424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x292428: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x292428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29242c: 0xc09e0c4  jal         func_278310
    ctx->pc = 0x29242Cu;
    SET_GPR_U32(ctx, 31, 0x292434u);
    ctx->pc = 0x292430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29242Cu;
    // 0x292430: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278310u, 0x29242Cu, 0x292434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292434u;
label_292434:
    // 0x292434: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x292434u;
    {
        const bool branch_taken_0x292434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292434) {
            ctx->pc = 0x292480u;
            goto label_292480;
        }
    }
    ctx->pc = 0x29243Cu;
    // 0x29243c: 0x0  nop
    ctx->pc = 0x29243cu;
    // NOP
label_292440:
    // 0x292440: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292444: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x292444u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x292448: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x292448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29244c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29244cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292450: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x292450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x292454: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x292454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29245c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x29245cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x292460: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292464: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x292464u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x292468: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x292468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x29246c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x29246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x292470: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x292470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x292474: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x292474u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x292478: 0xc09df3c  jal         func_277CF0
    ctx->pc = 0x292478u;
    SET_GPR_U32(ctx, 31, 0x292480u);
    ctx->pc = 0x29247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292478u;
    // 0x29247c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277CF0u, 0x292478u, 0x292480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292480u;
label_292480:
    // 0x292480: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x292480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x292484: 0x8e2429c8  lw          $a0, 0x29C8($s1)
    ctx->pc = 0x292484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
    // 0x292488: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x292488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x29248c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x29248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x292490: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x292490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x292494: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x292494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x292498: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x292498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x29249c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29249cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2924a0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2924A0u;
    {
        const bool branch_taken_0x2924a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2924a0) {
            ctx->pc = 0x2925B8u;
            goto label_2925b8;
        }
    }
    ctx->pc = 0x2924A8u;
    // 0x2924a8: 0x96620286  lhu         $v0, 0x286($s3)
    ctx->pc = 0x2924a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 646)));
    // 0x2924ac: 0x30420900  andi        $v0, $v0, 0x900
    ctx->pc = 0x2924acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2304);
    // 0x2924b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2924B0u;
    {
        const bool branch_taken_0x2924b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2924b0) {
            ctx->pc = 0x2924C8u;
            goto label_2924c8;
        }
    }
    ctx->pc = 0x2924B8u;
    // 0x2924b8: 0x96620288  lhu         $v0, 0x288($s3)
    ctx->pc = 0x2924b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x2924bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2924bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2924c0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2924C0u;
    {
        const bool branch_taken_0x2924c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2924c0) {
            ctx->pc = 0x292518u;
            goto label_292518;
        }
    }
    ctx->pc = 0x2924C8u;
label_2924c8:
    // 0x2924c8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2924c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2924cc: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x2924ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2924d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2924d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2924d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2924d8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2924d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2924dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2924dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924e0: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2924e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2924e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2924e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2924e8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2924e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2924ec: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2924ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2924f0: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x2924f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x2924f4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2924f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2924f8: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2924f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2924fc: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x2924fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x292500: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x292500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x292504: 0xc09e040  jal         func_278100
    ctx->pc = 0x292504u;
    SET_GPR_U32(ctx, 31, 0x29250Cu);
    ctx->pc = 0x292508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292504u;
    // 0x292508: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278100u, 0x292504u, 0x29250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29250Cu;
label_29250c:
    // 0x29250c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x29250Cu;
    {
        const bool branch_taken_0x29250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29250c) {
            ctx->pc = 0x2925B8u;
            goto label_2925b8;
        }
    }
    ctx->pc = 0x292514u;
    // 0x292514: 0x0  nop
    ctx->pc = 0x292514u;
    // NOP
label_292518:
    // 0x292518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x292518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29251c: 0xc0a69c8  jal         func_29A720
    ctx->pc = 0x29251Cu;
    SET_GPR_U32(ctx, 31, 0x292524u);
    ctx->pc = 0x292520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29251Cu;
    // 0x292520: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A720u, 0x29251Cu, 0x292524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292524u;
label_292524:
    // 0x292524: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x292524u;
    {
        const bool branch_taken_0x292524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292524) {
            ctx->pc = 0x292578u;
            goto label_292578;
        }
    }
    ctx->pc = 0x29252Cu;
    // 0x29252c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x29252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292530: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x292530u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x292534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x292534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292538: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x292538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29253c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x29253cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x292540: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x292540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292548: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x292548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x29254c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x29254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x292550: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x292550u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x292554: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x292554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x292558: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x292558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x29255c: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x29255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x292560: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x292560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x292564: 0xc09e104  jal         func_278410
    ctx->pc = 0x292564u;
    SET_GPR_U32(ctx, 31, 0x29256Cu);
    ctx->pc = 0x292568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292564u;
    // 0x292568: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278410u, 0x292564u, 0x29256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29256Cu;
label_29256c:
    // 0x29256c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29256Cu;
    {
        const bool branch_taken_0x29256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29256c) {
            ctx->pc = 0x2925B8u;
            goto label_2925b8;
        }
    }
    ctx->pc = 0x292574u;
    // 0x292574: 0x0  nop
    ctx->pc = 0x292574u;
    // NOP
label_292578:
    // 0x292578: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x29257c: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x29257cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x292580: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x292580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292584: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x292584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292588: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x292588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29258c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x29258cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292594: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x292594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x292598: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x292598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x29259c: 0x926508e8  lbu         $a1, 0x8E8($s3)
    ctx->pc = 0x29259cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x2925a0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2925a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2925a4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2925a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2925a8: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x2925a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x2925ac: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2925acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2925b0: 0xc09df7c  jal         func_277DF0
    ctx->pc = 0x2925B0u;
    SET_GPR_U32(ctx, 31, 0x2925B8u);
    ctx->pc = 0x2925B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2925B0u;
    // 0x2925b4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DF0u, 0x2925B0u, 0x2925B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2925B8u;
label_2925b8:
    // 0x2925b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2925b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2925bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2925bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2925c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2925c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2925c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2925c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2925c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2925c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2925cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2925CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2925D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2925CCu;
        // 0x2925d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2925CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2925D4u;
}
