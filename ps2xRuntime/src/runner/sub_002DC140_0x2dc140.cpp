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

// Function: sub_002DC140
// Address: 0x2dc140 - 0x2dc45c
void sub_002DC140_0x2dc140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC140_0x2dc140");
#endif

    switch (ctx->pc) {
        case 0x2dc140u: goto label_2dc140;
        case 0x2dc144u: goto label_2dc144;
        case 0x2dc148u: goto label_2dc148;
        case 0x2dc14cu: goto label_2dc14c;
        case 0x2dc150u: goto label_2dc150;
        case 0x2dc154u: goto label_2dc154;
        case 0x2dc158u: goto label_2dc158;
        case 0x2dc15cu: goto label_2dc15c;
        case 0x2dc160u: goto label_2dc160;
        case 0x2dc164u: goto label_2dc164;
        case 0x2dc168u: goto label_2dc168;
        case 0x2dc16cu: goto label_2dc16c;
        case 0x2dc170u: goto label_2dc170;
        case 0x2dc174u: goto label_2dc174;
        case 0x2dc178u: goto label_2dc178;
        case 0x2dc17cu: goto label_2dc17c;
        case 0x2dc180u: goto label_2dc180;
        case 0x2dc184u: goto label_2dc184;
        case 0x2dc188u: goto label_2dc188;
        case 0x2dc18cu: goto label_2dc18c;
        case 0x2dc190u: goto label_2dc190;
        case 0x2dc194u: goto label_2dc194;
        case 0x2dc198u: goto label_2dc198;
        case 0x2dc19cu: goto label_2dc19c;
        case 0x2dc1a0u: goto label_2dc1a0;
        case 0x2dc1a4u: goto label_2dc1a4;
        case 0x2dc1a8u: goto label_2dc1a8;
        case 0x2dc1acu: goto label_2dc1ac;
        case 0x2dc1b0u: goto label_2dc1b0;
        case 0x2dc1b4u: goto label_2dc1b4;
        case 0x2dc1b8u: goto label_2dc1b8;
        case 0x2dc1bcu: goto label_2dc1bc;
        case 0x2dc1c0u: goto label_2dc1c0;
        case 0x2dc1c4u: goto label_2dc1c4;
        case 0x2dc1c8u: goto label_2dc1c8;
        case 0x2dc1ccu: goto label_2dc1cc;
        case 0x2dc1d0u: goto label_2dc1d0;
        case 0x2dc1d4u: goto label_2dc1d4;
        case 0x2dc1d8u: goto label_2dc1d8;
        case 0x2dc1dcu: goto label_2dc1dc;
        case 0x2dc1e0u: goto label_2dc1e0;
        case 0x2dc1e4u: goto label_2dc1e4;
        case 0x2dc1e8u: goto label_2dc1e8;
        case 0x2dc1ecu: goto label_2dc1ec;
        case 0x2dc1f0u: goto label_2dc1f0;
        case 0x2dc1f4u: goto label_2dc1f4;
        case 0x2dc1f8u: goto label_2dc1f8;
        case 0x2dc1fcu: goto label_2dc1fc;
        case 0x2dc200u: goto label_2dc200;
        case 0x2dc204u: goto label_2dc204;
        case 0x2dc208u: goto label_2dc208;
        case 0x2dc20cu: goto label_2dc20c;
        case 0x2dc210u: goto label_2dc210;
        case 0x2dc214u: goto label_2dc214;
        case 0x2dc218u: goto label_2dc218;
        case 0x2dc21cu: goto label_2dc21c;
        case 0x2dc220u: goto label_2dc220;
        case 0x2dc224u: goto label_2dc224;
        case 0x2dc228u: goto label_2dc228;
        case 0x2dc22cu: goto label_2dc22c;
        case 0x2dc230u: goto label_2dc230;
        case 0x2dc234u: goto label_2dc234;
        case 0x2dc238u: goto label_2dc238;
        case 0x2dc23cu: goto label_2dc23c;
        case 0x2dc240u: goto label_2dc240;
        case 0x2dc244u: goto label_2dc244;
        case 0x2dc248u: goto label_2dc248;
        case 0x2dc24cu: goto label_2dc24c;
        case 0x2dc250u: goto label_2dc250;
        case 0x2dc254u: goto label_2dc254;
        case 0x2dc258u: goto label_2dc258;
        case 0x2dc25cu: goto label_2dc25c;
        case 0x2dc260u: goto label_2dc260;
        case 0x2dc264u: goto label_2dc264;
        case 0x2dc268u: goto label_2dc268;
        case 0x2dc26cu: goto label_2dc26c;
        case 0x2dc270u: goto label_2dc270;
        case 0x2dc274u: goto label_2dc274;
        case 0x2dc278u: goto label_2dc278;
        case 0x2dc27cu: goto label_2dc27c;
        case 0x2dc280u: goto label_2dc280;
        case 0x2dc284u: goto label_2dc284;
        case 0x2dc288u: goto label_2dc288;
        case 0x2dc28cu: goto label_2dc28c;
        case 0x2dc290u: goto label_2dc290;
        case 0x2dc294u: goto label_2dc294;
        case 0x2dc298u: goto label_2dc298;
        case 0x2dc29cu: goto label_2dc29c;
        case 0x2dc2a0u: goto label_2dc2a0;
        case 0x2dc2a4u: goto label_2dc2a4;
        case 0x2dc2a8u: goto label_2dc2a8;
        case 0x2dc2acu: goto label_2dc2ac;
        case 0x2dc2b0u: goto label_2dc2b0;
        case 0x2dc2b4u: goto label_2dc2b4;
        case 0x2dc2b8u: goto label_2dc2b8;
        case 0x2dc2bcu: goto label_2dc2bc;
        case 0x2dc2c0u: goto label_2dc2c0;
        case 0x2dc2c4u: goto label_2dc2c4;
        case 0x2dc2c8u: goto label_2dc2c8;
        case 0x2dc2ccu: goto label_2dc2cc;
        case 0x2dc2d0u: goto label_2dc2d0;
        case 0x2dc2d4u: goto label_2dc2d4;
        case 0x2dc2d8u: goto label_2dc2d8;
        case 0x2dc2dcu: goto label_2dc2dc;
        case 0x2dc2e0u: goto label_2dc2e0;
        case 0x2dc2e4u: goto label_2dc2e4;
        case 0x2dc2e8u: goto label_2dc2e8;
        case 0x2dc2ecu: goto label_2dc2ec;
        case 0x2dc2f0u: goto label_2dc2f0;
        case 0x2dc2f4u: goto label_2dc2f4;
        case 0x2dc2f8u: goto label_2dc2f8;
        case 0x2dc2fcu: goto label_2dc2fc;
        case 0x2dc300u: goto label_2dc300;
        case 0x2dc304u: goto label_2dc304;
        case 0x2dc308u: goto label_2dc308;
        case 0x2dc30cu: goto label_2dc30c;
        case 0x2dc310u: goto label_2dc310;
        case 0x2dc314u: goto label_2dc314;
        case 0x2dc318u: goto label_2dc318;
        case 0x2dc31cu: goto label_2dc31c;
        case 0x2dc320u: goto label_2dc320;
        case 0x2dc324u: goto label_2dc324;
        case 0x2dc328u: goto label_2dc328;
        case 0x2dc32cu: goto label_2dc32c;
        case 0x2dc330u: goto label_2dc330;
        case 0x2dc334u: goto label_2dc334;
        case 0x2dc338u: goto label_2dc338;
        case 0x2dc33cu: goto label_2dc33c;
        case 0x2dc340u: goto label_2dc340;
        case 0x2dc344u: goto label_2dc344;
        case 0x2dc348u: goto label_2dc348;
        case 0x2dc34cu: goto label_2dc34c;
        case 0x2dc350u: goto label_2dc350;
        case 0x2dc354u: goto label_2dc354;
        case 0x2dc358u: goto label_2dc358;
        case 0x2dc35cu: goto label_2dc35c;
        case 0x2dc360u: goto label_2dc360;
        case 0x2dc364u: goto label_2dc364;
        case 0x2dc368u: goto label_2dc368;
        case 0x2dc36cu: goto label_2dc36c;
        case 0x2dc370u: goto label_2dc370;
        case 0x2dc374u: goto label_2dc374;
        case 0x2dc378u: goto label_2dc378;
        case 0x2dc37cu: goto label_2dc37c;
        case 0x2dc380u: goto label_2dc380;
        case 0x2dc384u: goto label_2dc384;
        case 0x2dc388u: goto label_2dc388;
        case 0x2dc38cu: goto label_2dc38c;
        case 0x2dc390u: goto label_2dc390;
        case 0x2dc394u: goto label_2dc394;
        case 0x2dc398u: goto label_2dc398;
        case 0x2dc39cu: goto label_2dc39c;
        case 0x2dc3a0u: goto label_2dc3a0;
        case 0x2dc3a4u: goto label_2dc3a4;
        case 0x2dc3a8u: goto label_2dc3a8;
        case 0x2dc3acu: goto label_2dc3ac;
        case 0x2dc3b0u: goto label_2dc3b0;
        case 0x2dc3b4u: goto label_2dc3b4;
        case 0x2dc3b8u: goto label_2dc3b8;
        case 0x2dc3bcu: goto label_2dc3bc;
        case 0x2dc3c0u: goto label_2dc3c0;
        case 0x2dc3c4u: goto label_2dc3c4;
        case 0x2dc3c8u: goto label_2dc3c8;
        case 0x2dc3ccu: goto label_2dc3cc;
        case 0x2dc3d0u: goto label_2dc3d0;
        case 0x2dc3d4u: goto label_2dc3d4;
        case 0x2dc3d8u: goto label_2dc3d8;
        case 0x2dc3dcu: goto label_2dc3dc;
        case 0x2dc3e0u: goto label_2dc3e0;
        case 0x2dc3e4u: goto label_2dc3e4;
        case 0x2dc3e8u: goto label_2dc3e8;
        case 0x2dc3ecu: goto label_2dc3ec;
        case 0x2dc3f0u: goto label_2dc3f0;
        case 0x2dc3f4u: goto label_2dc3f4;
        case 0x2dc3f8u: goto label_2dc3f8;
        case 0x2dc3fcu: goto label_2dc3fc;
        case 0x2dc400u: goto label_2dc400;
        case 0x2dc404u: goto label_2dc404;
        case 0x2dc408u: goto label_2dc408;
        case 0x2dc40cu: goto label_2dc40c;
        case 0x2dc410u: goto label_2dc410;
        case 0x2dc414u: goto label_2dc414;
        case 0x2dc418u: goto label_2dc418;
        case 0x2dc41cu: goto label_2dc41c;
        case 0x2dc420u: goto label_2dc420;
        case 0x2dc424u: goto label_2dc424;
        case 0x2dc428u: goto label_2dc428;
        case 0x2dc42cu: goto label_2dc42c;
        case 0x2dc430u: goto label_2dc430;
        case 0x2dc434u: goto label_2dc434;
        case 0x2dc438u: goto label_2dc438;
        case 0x2dc43cu: goto label_2dc43c;
        case 0x2dc440u: goto label_2dc440;
        case 0x2dc444u: goto label_2dc444;
        case 0x2dc448u: goto label_2dc448;
        case 0x2dc44cu: goto label_2dc44c;
        case 0x2dc450u: goto label_2dc450;
        case 0x2dc454u: goto label_2dc454;
        case 0x2dc458u: goto label_2dc458;
        default: break;
    }

    ctx->pc = 0x2dc140u;

label_2dc140:
    // 0x2dc140: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2dc140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2dc144:
    // 0x2dc144: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2dc144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2dc148:
    // 0x2dc148: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dc148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2dc14c:
    // 0x2dc14c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dc14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2dc150:
    // 0x2dc150: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2dc150u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2dc154:
    // 0x2dc154: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dc154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2dc158:
    // 0x2dc158: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2dc158u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dc15c:
    // 0x2dc15c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dc15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2dc160:
    // 0x2dc160: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dc160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2dc164:
    // 0x2dc164: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2dc164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2dc168:
    // 0x2dc168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dc16c:
    // 0x2dc16c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2dc16cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2dc170:
    // 0x2dc170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dc174:
    // 0x2dc174: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2dc174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2dc178:
    // 0x2dc178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dc17c:
    // 0x2dc17c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dc180:
    // 0x2dc180: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2dc180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2dc184:
    // 0x2dc184: 0xc09d4d4  jal         func_275350
label_2dc188:
    if (ctx->pc == 0x2DC188u) {
        ctx->pc = 0x2DC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC184u;
        // 0x2dc188: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC18Cu;
        goto label_2dc18c;
    }
    ctx->pc = 0x2DC184u;
    SET_GPR_U32(ctx, 31, 0x2DC18Cu);
    ctx->pc = 0x2DC188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC184u;
    // 0x2dc188: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2DC184u, 0x2DC18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC18Cu;
label_2dc18c:
    // 0x2dc18c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2dc190:
    if (ctx->pc == 0x2DC190u) {
        ctx->pc = 0x2DC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC18Cu;
        // 0x2dc190: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC194u;
        goto label_2dc194;
    }
    ctx->pc = 0x2DC18Cu;
    {
        const bool branch_taken_0x2dc18c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC18Cu;
        // 0x2dc190: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc18c) {
            ctx->pc = 0x2DC1A8u;
            goto label_2dc1a8;
        }
    }
    ctx->pc = 0x2DC194u;
label_2dc194:
    // 0x2dc194: 0xc09d4d8  jal         func_275360
label_2dc198:
    if (ctx->pc == 0x2DC198u) {
        ctx->pc = 0x2DC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC194u;
        // 0x2dc198: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC19Cu;
        goto label_2dc19c;
    }
    ctx->pc = 0x2DC194u;
    SET_GPR_U32(ctx, 31, 0x2DC19Cu);
    ctx->pc = 0x2DC198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC194u;
    // 0x2dc198: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DC194u, 0x2DC19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC19Cu;
label_2dc19c:
    // 0x2dc19c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2dc1a0:
    if (ctx->pc == 0x2DC1A0u) {
        ctx->pc = 0x2DC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC19Cu;
        // 0x2dc1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1A4u;
        goto label_2dc1a4;
    }
    ctx->pc = 0x2DC19Cu;
    {
        const bool branch_taken_0x2dc19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC19Cu;
        // 0x2dc1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc19c) {
            ctx->pc = 0x2DC430u;
            goto label_2dc430;
        }
    }
    ctx->pc = 0x2DC1A4u;
label_2dc1a4:
    // 0x2dc1a4: 0x0  nop
    ctx->pc = 0x2dc1a4u;
    // NOP
label_2dc1a8:
    // 0x2dc1a8: 0xc0741a4  jal         func_1D0690
label_2dc1ac:
    if (ctx->pc == 0x2DC1ACu) {
        ctx->pc = 0x2DC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1A8u;
        // 0x2dc1ac: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1B0u;
        goto label_2dc1b0;
    }
    ctx->pc = 0x2DC1A8u;
    SET_GPR_U32(ctx, 31, 0x2DC1B0u);
    ctx->pc = 0x2DC1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1A8u;
    // 0x2dc1ac: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DC1A8u, 0x2DC1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1B0u;
label_2dc1b0:
    // 0x2dc1b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2dc1b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc1b4:
    // 0x2dc1b4: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_2dc1b8:
    if (ctx->pc == 0x2DC1B8u) {
        ctx->pc = 0x2DC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1B4u;
        // 0x2dc1b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1BCu;
        goto label_2dc1bc;
    }
    ctx->pc = 0x2DC1B4u;
    {
        const bool branch_taken_0x2dc1b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1B4u;
        // 0x2dc1b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1b4) {
            ctx->pc = 0x2DC1D8u;
            goto label_2dc1d8;
        }
    }
    ctx->pc = 0x2DC1BCu;
label_2dc1bc:
    // 0x2dc1bc: 0xc096b00  jal         func_25AC00
label_2dc1c0:
    if (ctx->pc == 0x2DC1C0u) {
        ctx->pc = 0x2DC1C4u;
        goto label_2dc1c4;
    }
    ctx->pc = 0x2DC1BCu;
    SET_GPR_U32(ctx, 31, 0x2DC1C4u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x2DC1BCu, 0x2DC1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1C4u;
label_2dc1c4:
    // 0x2dc1c4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2dc1c8:
    // 0x2dc1c8: 0x24427980  addiu       $v0, $v0, 0x7980
    ctx->pc = 0x2dc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31104));
label_2dc1cc:
    // 0x2dc1cc: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x2dc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
label_2dc1d0:
    // 0x2dc1d0: 0xaea0007c  sw          $zero, 0x7C($s5)
    ctx->pc = 0x2dc1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 0));
label_2dc1d4:
    // 0x2dc1d4: 0x0  nop
    ctx->pc = 0x2dc1d4u;
    // NOP
label_2dc1d8:
    // 0x2dc1d8: 0x12a00091  beqz        $s5, . + 4 + (0x91 << 2)
label_2dc1dc:
    if (ctx->pc == 0x2DC1DCu) {
        ctx->pc = 0x2DC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1D8u;
        // 0x2dc1dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1E0u;
        goto label_2dc1e0;
    }
    ctx->pc = 0x2DC1D8u;
    {
        const bool branch_taken_0x2dc1d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1D8u;
        // 0x2dc1dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc1d8) {
            ctx->pc = 0x2DC420u;
            goto label_2dc420;
        }
    }
    ctx->pc = 0x2DC1E0u;
label_2dc1e0:
    // 0x2dc1e0: 0xc09d4fc  jal         func_2753F0
label_2dc1e4:
    if (ctx->pc == 0x2DC1E4u) {
        ctx->pc = 0x2DC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1E0u;
        // 0x2dc1e4: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC1E8u;
        goto label_2dc1e8;
    }
    ctx->pc = 0x2DC1E0u;
    SET_GPR_U32(ctx, 31, 0x2DC1E8u);
    ctx->pc = 0x2DC1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1E0u;
    // 0x2dc1e4: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2DC1E0u, 0x2DC1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1E8u;
label_2dc1e8:
    // 0x2dc1e8: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2dc1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2dc1ec:
    // 0x2dc1ec: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x2dc1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_2dc1f0:
    // 0x2dc1f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2dc1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2dc1f4:
    // 0x2dc1f4: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc1f8:
    // 0x2dc1f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dc1fc:
    // 0x2dc1fc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2dc1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dc200:
    // 0x2dc200: 0xc09d524  jal         func_275490
label_2dc204:
    if (ctx->pc == 0x2DC204u) {
        ctx->pc = 0x2DC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC200u;
        // 0x2dc204: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC208u;
        goto label_2dc208;
    }
    ctx->pc = 0x2DC200u;
    SET_GPR_U32(ctx, 31, 0x2DC208u);
    ctx->pc = 0x2DC204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC200u;
    // 0x2dc204: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DC200u, 0x2DC208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC208u;
label_2dc208:
    // 0x2dc208: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dc208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc20c:
    // 0x2dc20c: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
label_2dc210:
    if (ctx->pc == 0x2DC210u) {
        ctx->pc = 0x2DC214u;
        goto label_2dc214;
    }
    ctx->pc = 0x2DC20Cu;
    {
        const bool branch_taken_0x2dc20c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc20c) {
            ctx->pc = 0x2DC248u;
            goto label_2dc248;
        }
    }
    ctx->pc = 0x2DC214u;
label_2dc214:
    // 0x2dc214: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2dc218:
    if (ctx->pc == 0x2DC218u) {
        ctx->pc = 0x2DC21Cu;
        goto label_2dc21c;
    }
    ctx->pc = 0x2DC214u;
    {
        const bool branch_taken_0x2dc214 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc214) {
            ctx->pc = 0x2DC230u;
            goto label_2dc230;
        }
    }
    ctx->pc = 0x2DC21Cu;
label_2dc21c:
    // 0x2dc21c: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x2dc21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2dc220:
    // 0x2dc220: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dc220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dc224:
    // 0x2dc224: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dc224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dc228:
    // 0x2dc228: 0x320f809  jalr        $t9
label_2dc22c:
    if (ctx->pc == 0x2DC22Cu) {
        ctx->pc = 0x2DC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC228u;
        // 0x2dc22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC230u;
        goto label_2dc230;
    }
    ctx->pc = 0x2DC228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC230u);
        ctx->pc = 0x2DC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC228u;
        // 0x2dc22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC228u, 0x2DC230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC230u;
label_2dc230:
    // 0x2dc230: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc234:
    // 0x2dc234: 0xc09d4d8  jal         func_275360
label_2dc238:
    if (ctx->pc == 0x2DC238u) {
        ctx->pc = 0x2DC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC234u;
        // 0x2dc238: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC23Cu;
        goto label_2dc23c;
    }
    ctx->pc = 0x2DC234u;
    SET_GPR_U32(ctx, 31, 0x2DC23Cu);
    ctx->pc = 0x2DC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC234u;
    // 0x2dc238: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DC234u, 0x2DC23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC23Cu;
label_2dc23c:
    // 0x2dc23c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_2dc240:
    if (ctx->pc == 0x2DC240u) {
        ctx->pc = 0x2DC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC23Cu;
        // 0x2dc240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC244u;
        goto label_2dc244;
    }
    ctx->pc = 0x2DC23Cu;
    {
        const bool branch_taken_0x2dc23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC23Cu;
        // 0x2dc240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc23c) {
            ctx->pc = 0x2DC430u;
            goto label_2dc430;
        }
    }
    ctx->pc = 0x2DC244u;
label_2dc244:
    // 0x2dc244: 0x0  nop
    ctx->pc = 0x2dc244u;
    // NOP
label_2dc248:
    // 0x2dc248: 0x92860013  lbu         $a2, 0x13($s4)
    ctx->pc = 0x2dc248u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
label_2dc24c:
    // 0x2dc24c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc250:
    // 0x2dc250: 0xc09d524  jal         func_275490
label_2dc254:
    if (ctx->pc == 0x2DC254u) {
        ctx->pc = 0x2DC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC250u;
        // 0x2dc254: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC258u;
        goto label_2dc258;
    }
    ctx->pc = 0x2DC250u;
    SET_GPR_U32(ctx, 31, 0x2DC258u);
    ctx->pc = 0x2DC254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC250u;
    // 0x2dc254: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DC250u, 0x2DC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC258u;
label_2dc258:
    // 0x2dc258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dc258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc25c:
    // 0x2dc25c: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
label_2dc260:
    if (ctx->pc == 0x2DC260u) {
        ctx->pc = 0x2DC264u;
        goto label_2dc264;
    }
    ctx->pc = 0x2DC25Cu;
    {
        const bool branch_taken_0x2dc25c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc25c) {
            ctx->pc = 0x2DC298u;
            goto label_2dc298;
        }
    }
    ctx->pc = 0x2DC264u;
label_2dc264:
    // 0x2dc264: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2dc268:
    if (ctx->pc == 0x2DC268u) {
        ctx->pc = 0x2DC26Cu;
        goto label_2dc26c;
    }
    ctx->pc = 0x2DC264u;
    {
        const bool branch_taken_0x2dc264 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc264) {
            ctx->pc = 0x2DC280u;
            goto label_2dc280;
        }
    }
    ctx->pc = 0x2DC26Cu;
label_2dc26c:
    // 0x2dc26c: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x2dc26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2dc270:
    // 0x2dc270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dc270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dc274:
    // 0x2dc274: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dc274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dc278:
    // 0x2dc278: 0x320f809  jalr        $t9
label_2dc27c:
    if (ctx->pc == 0x2DC27Cu) {
        ctx->pc = 0x2DC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC278u;
        // 0x2dc27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC280u;
        goto label_2dc280;
    }
    ctx->pc = 0x2DC278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC280u);
        ctx->pc = 0x2DC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC278u;
        // 0x2dc27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC278u, 0x2DC280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC280u;
label_2dc280:
    // 0x2dc280: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc284:
    // 0x2dc284: 0xc09d4d8  jal         func_275360
label_2dc288:
    if (ctx->pc == 0x2DC288u) {
        ctx->pc = 0x2DC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC284u;
        // 0x2dc288: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC28Cu;
        goto label_2dc28c;
    }
    ctx->pc = 0x2DC284u;
    SET_GPR_U32(ctx, 31, 0x2DC28Cu);
    ctx->pc = 0x2DC288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC284u;
    // 0x2dc288: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DC284u, 0x2DC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC28Cu;
label_2dc28c:
    // 0x2dc28c: 0x10000068  b           . + 4 + (0x68 << 2)
label_2dc290:
    if (ctx->pc == 0x2DC290u) {
        ctx->pc = 0x2DC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC28Cu;
        // 0x2dc290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC294u;
        goto label_2dc294;
    }
    ctx->pc = 0x2DC28Cu;
    {
        const bool branch_taken_0x2dc28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC28Cu;
        // 0x2dc290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc28c) {
            ctx->pc = 0x2DC430u;
            goto label_2dc430;
        }
    }
    ctx->pc = 0x2DC294u;
label_2dc294:
    // 0x2dc294: 0x0  nop
    ctx->pc = 0x2dc294u;
    // NOP
label_2dc298:
    // 0x2dc298: 0x96660002  lhu         $a2, 0x2($s3)
    ctx->pc = 0x2dc298u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2dc29c:
    // 0x2dc29c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc2a0:
    // 0x2dc2a0: 0xc09d524  jal         func_275490
label_2dc2a4:
    if (ctx->pc == 0x2DC2A4u) {
        ctx->pc = 0x2DC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2A0u;
        // 0x2dc2a4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC2A8u;
        goto label_2dc2a8;
    }
    ctx->pc = 0x2DC2A0u;
    SET_GPR_U32(ctx, 31, 0x2DC2A8u);
    ctx->pc = 0x2DC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC2A0u;
    // 0x2dc2a4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DC2A0u, 0x2DC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2A8u;
label_2dc2a8:
    // 0x2dc2a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dc2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2ac:
    // 0x2dc2ac: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_2dc2b0:
    if (ctx->pc == 0x2DC2B0u) {
        ctx->pc = 0x2DC2B4u;
        goto label_2dc2b4;
    }
    ctx->pc = 0x2DC2ACu;
    {
        const bool branch_taken_0x2dc2ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2ac) {
            ctx->pc = 0x2DC2E8u;
            goto label_2dc2e8;
        }
    }
    ctx->pc = 0x2DC2B4u;
label_2dc2b4:
    // 0x2dc2b4: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_2dc2b8:
    if (ctx->pc == 0x2DC2B8u) {
        ctx->pc = 0x2DC2BCu;
        goto label_2dc2bc;
    }
    ctx->pc = 0x2DC2B4u;
    {
        const bool branch_taken_0x2dc2b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2b4) {
            ctx->pc = 0x2DC2D0u;
            goto label_2dc2d0;
        }
    }
    ctx->pc = 0x2DC2BCu;
label_2dc2bc:
    // 0x2dc2bc: 0x8eb90034  lw          $t9, 0x34($s5)
    ctx->pc = 0x2dc2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2dc2c0:
    // 0x2dc2c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dc2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2c4:
    // 0x2dc2c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dc2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dc2c8:
    // 0x2dc2c8: 0x320f809  jalr        $t9
label_2dc2cc:
    if (ctx->pc == 0x2DC2CCu) {
        ctx->pc = 0x2DC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2C8u;
        // 0x2dc2cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC2D0u;
        goto label_2dc2d0;
    }
    ctx->pc = 0x2DC2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DC2D0u);
        ctx->pc = 0x2DC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2C8u;
        // 0x2dc2cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC2C8u, 0x2DC2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC2D0u;
label_2dc2d0:
    // 0x2dc2d0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc2d4:
    // 0x2dc2d4: 0xc09d4d8  jal         func_275360
label_2dc2d8:
    if (ctx->pc == 0x2DC2D8u) {
        ctx->pc = 0x2DC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2D4u;
        // 0x2dc2d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC2DCu;
        goto label_2dc2dc;
    }
    ctx->pc = 0x2DC2D4u;
    SET_GPR_U32(ctx, 31, 0x2DC2DCu);
    ctx->pc = 0x2DC2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC2D4u;
    // 0x2dc2d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DC2D4u, 0x2DC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2DCu;
label_2dc2dc:
    // 0x2dc2dc: 0x10000054  b           . + 4 + (0x54 << 2)
label_2dc2e0:
    if (ctx->pc == 0x2DC2E0u) {
        ctx->pc = 0x2DC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2DCu;
        // 0x2dc2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC2E4u;
        goto label_2dc2e4;
    }
    ctx->pc = 0x2DC2DCu;
    {
        const bool branch_taken_0x2dc2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2DCu;
        // 0x2dc2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc2dc) {
            ctx->pc = 0x2DC430u;
            goto label_2dc430;
        }
    }
    ctx->pc = 0x2DC2E4u;
label_2dc2e4:
    // 0x2dc2e4: 0x0  nop
    ctx->pc = 0x2dc2e4u;
    // NOP
label_2dc2e8:
    // 0x2dc2e8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2dc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2dc2ec:
    // 0x2dc2ec: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x2dc2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_2dc2f0:
    // 0x2dc2f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2dc2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2f4:
    // 0x2dc2f4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2dc2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2f8:
    // 0x2dc2f8: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2dc2f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2fc:
    // 0x2dc2fc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2dc2fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dc300:
    // 0x2dc300: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dc300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dc304:
    // 0x2dc304: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dc304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2dc308:
    // 0x2dc308: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2dc308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2dc30c:
    // 0x2dc30c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2dc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2dc310:
    // 0x2dc310: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2dc310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2dc314:
    // 0x2dc314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dc314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dc318:
    // 0x2dc318: 0xc096b38  jal         func_25ACE0
label_2dc31c:
    if (ctx->pc == 0x2DC31Cu) {
        ctx->pc = 0x2DC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC318u;
        // 0x2dc31c: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC320u;
        goto label_2dc320;
    }
    ctx->pc = 0x2DC318u;
    SET_GPR_U32(ctx, 31, 0x2DC320u);
    ctx->pc = 0x2DC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC318u;
    // 0x2dc31c: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x2DC318u, 0x2DC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC320u;
label_2dc320:
    // 0x2dc320: 0x92a20050  lbu         $v0, 0x50($s5)
    ctx->pc = 0x2dc320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
label_2dc324:
    // 0x2dc324: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2dc324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2dc328:
    // 0x2dc328: 0xa2a20050  sb          $v0, 0x50($s5)
    ctx->pc = 0x2dc328u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 80), (uint8_t)GPR_U32(ctx, 2));
label_2dc32c:
    // 0x2dc32c: 0xa6a0005a  sh          $zero, 0x5A($s5)
    ctx->pc = 0x2dc32cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 90), (uint16_t)GPR_U32(ctx, 0));
label_2dc330:
    // 0x2dc330: 0xa6a00058  sh          $zero, 0x58($s5)
    ctx->pc = 0x2dc330u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 88), (uint16_t)GPR_U32(ctx, 0));
label_2dc334:
    // 0x2dc334: 0xa6a00056  sh          $zero, 0x56($s5)
    ctx->pc = 0x2dc334u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 86), (uint16_t)GPR_U32(ctx, 0));
label_2dc338:
    // 0x2dc338: 0xa2a00051  sb          $zero, 0x51($s5)
    ctx->pc = 0x2dc338u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 81), (uint8_t)GPR_U32(ctx, 0));
label_2dc33c:
    // 0x2dc33c: 0xaeb40070  sw          $s4, 0x70($s5)
    ctx->pc = 0x2dc33cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 20));
label_2dc340:
    // 0x2dc340: 0xaeb30074  sw          $s3, 0x74($s5)
    ctx->pc = 0x2dc340u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 19));
label_2dc344:
    // 0x2dc344: 0xaeb20078  sw          $s2, 0x78($s5)
    ctx->pc = 0x2dc344u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 18));
label_2dc348:
    // 0x2dc348: 0x92820012  lbu         $v0, 0x12($s4)
    ctx->pc = 0x2dc348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
label_2dc34c:
    // 0x2dc34c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2dc34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2dc350:
    // 0x2dc350: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2dc354:
    if (ctx->pc == 0x2DC354u) {
        ctx->pc = 0x2DC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC350u;
        // 0x2dc354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC358u;
        goto label_2dc358;
    }
    ctx->pc = 0x2DC350u;
    {
        const bool branch_taken_0x2dc350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC350u;
        // 0x2dc354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc350) {
            ctx->pc = 0x2DC360u;
            goto label_2dc360;
        }
    }
    ctx->pc = 0x2DC358u;
label_2dc358:
    // 0x2dc358: 0x10000003  b           . + 4 + (0x3 << 2)
label_2dc35c:
    if (ctx->pc == 0x2DC35Cu) {
        ctx->pc = 0x2DC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC358u;
        // 0x2dc35c: 0xa6a20080  sh          $v0, 0x80($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC360u;
        goto label_2dc360;
    }
    ctx->pc = 0x2DC358u;
    {
        const bool branch_taken_0x2dc358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC358u;
        // 0x2dc35c: 0xa6a20080  sh          $v0, 0x80($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc358) {
            ctx->pc = 0x2DC368u;
            goto label_2dc368;
        }
    }
    ctx->pc = 0x2DC360u;
label_2dc360:
    // 0x2dc360: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x2dc360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_2dc364:
    // 0x2dc364: 0xa6a20080  sh          $v0, 0x80($s5)
    ctx->pc = 0x2dc364u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 2));
label_2dc368:
    // 0x2dc368: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x2dc368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_2dc36c:
    // 0x2dc36c: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x2dc36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_2dc370:
    // 0x2dc370: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2dc370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2dc374:
    // 0x2dc374: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2dc374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2dc378:
    // 0x2dc378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dc378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dc37c:
    // 0x2dc37c: 0xc0741a4  jal         func_1D0690
label_2dc380:
    if (ctx->pc == 0x2DC380u) {
        ctx->pc = 0x2DC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC37Cu;
        // 0x2dc380: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC384u;
        goto label_2dc384;
    }
    ctx->pc = 0x2DC37Cu;
    SET_GPR_U32(ctx, 31, 0x2DC384u);
    ctx->pc = 0x2DC380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC37Cu;
    // 0x2dc380: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DC37Cu, 0x2DC384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC384u;
label_2dc384:
    // 0x2dc384: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x2dc384u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
label_2dc388:
    // 0x2dc388: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x2dc388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_2dc38c:
    // 0x2dc38c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2dc390:
    if (ctx->pc == 0x2DC390u) {
        ctx->pc = 0x2DC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC38Cu;
        // 0x2dc390: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC394u;
        goto label_2dc394;
    }
    ctx->pc = 0x2DC38Cu;
    {
        const bool branch_taken_0x2dc38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC38Cu;
        // 0x2dc390: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc38c) {
            ctx->pc = 0x2DC3B0u;
            goto label_2dc3b0;
        }
    }
    ctx->pc = 0x2DC394u;
label_2dc394:
    // 0x2dc394: 0xc074268  jal         func_1D09A0
label_2dc398:
    if (ctx->pc == 0x2DC398u) {
        ctx->pc = 0x2DC39Cu;
        goto label_2dc39c;
    }
    ctx->pc = 0x2DC394u;
    SET_GPR_U32(ctx, 31, 0x2DC39Cu);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DC394u, 0x2DC39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC39Cu;
label_2dc39c:
    // 0x2dc39c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc3a0:
    // 0x2dc3a0: 0xc09d4d8  jal         func_275360
label_2dc3a4:
    if (ctx->pc == 0x2DC3A4u) {
        ctx->pc = 0x2DC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3A0u;
        // 0x2dc3a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC3A8u;
        goto label_2dc3a8;
    }
    ctx->pc = 0x2DC3A0u;
    SET_GPR_U32(ctx, 31, 0x2DC3A8u);
    ctx->pc = 0x2DC3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC3A0u;
    // 0x2dc3a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DC3A0u, 0x2DC3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3A8u;
label_2dc3a8:
    // 0x2dc3a8: 0x10000021  b           . + 4 + (0x21 << 2)
label_2dc3ac:
    if (ctx->pc == 0x2DC3ACu) {
        ctx->pc = 0x2DC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3A8u;
        // 0x2dc3ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC3B0u;
        goto label_2dc3b0;
    }
    ctx->pc = 0x2DC3A8u;
    {
        const bool branch_taken_0x2dc3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3A8u;
        // 0x2dc3ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3a8) {
            ctx->pc = 0x2DC430u;
            goto label_2dc430;
        }
    }
    ctx->pc = 0x2DC3B0u;
label_2dc3b0:
    // 0x2dc3b0: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x2dc3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_2dc3b4:
    // 0x2dc3b4: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x2dc3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_2dc3b8:
    // 0x2dc3b8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dc3b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2dc3bc:
    // 0x2dc3bc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2dc3bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dc3c0:
    // 0x2dc3c0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_2dc3c4:
    if (ctx->pc == 0x2DC3C4u) {
        ctx->pc = 0x2DC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3C0u;
        // 0x2dc3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC3C8u;
        goto label_2dc3c8;
    }
    ctx->pc = 0x2DC3C0u;
    {
        const bool branch_taken_0x2dc3c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3C0u;
        // 0x2dc3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3c0) {
            ctx->pc = 0x2DC408u;
            goto label_2dc408;
        }
    }
    ctx->pc = 0x2DC3C8u;
label_2dc3c8:
    // 0x2dc3c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc3cc:
    // 0x2dc3cc: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x2dc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_2dc3d0:
    // 0x2dc3d0: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x2dc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_2dc3d4:
    // 0x2dc3d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2dc3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2dc3d8:
    // 0x2dc3d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2dc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2dc3dc:
    // 0x2dc3dc: 0xa4440020  sh          $a0, 0x20($v0)
    ctx->pc = 0x2dc3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 4));
label_2dc3e0:
    // 0x2dc3e0: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x2dc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_2dc3e4:
    // 0x2dc3e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2dc3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2dc3e8:
    // 0x2dc3e8: 0xa0400025  sb          $zero, 0x25($v0)
    ctx->pc = 0x2dc3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 0));
label_2dc3ec:
    // 0x2dc3ec: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x2dc3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_2dc3f0:
    // 0x2dc3f0: 0x92620004  lbu         $v0, 0x4($s3)
    ctx->pc = 0x2dc3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_2dc3f4:
    // 0x2dc3f4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dc3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2dc3f8:
    // 0x2dc3f8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2dc3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dc3fc:
    // 0x2dc3fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2dc400:
    if (ctx->pc == 0x2DC400u) {
        ctx->pc = 0x2DC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3FCu;
        // 0x2dc400: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC404u;
        goto label_2dc404;
    }
    ctx->pc = 0x2DC3FCu;
    {
        const bool branch_taken_0x2dc3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3FCu;
        // 0x2dc400: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3fc) {
            ctx->pc = 0x2DC3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc3d0;
        }
    }
    ctx->pc = 0x2DC404u;
label_2dc404:
    // 0x2dc404: 0x0  nop
    ctx->pc = 0x2dc404u;
    // NOP
label_2dc408:
    // 0x2dc408: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x2dc408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2dc40c:
    // 0x2dc40c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc410:
    // 0x2dc410: 0xc09d4d8  jal         func_275360
label_2dc414:
    if (ctx->pc == 0x2DC414u) {
        ctx->pc = 0x2DC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC410u;
        // 0x2dc414: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC418u;
        goto label_2dc418;
    }
    ctx->pc = 0x2DC410u;
    SET_GPR_U32(ctx, 31, 0x2DC418u);
    ctx->pc = 0x2DC414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC410u;
    // 0x2dc414: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DC410u, 0x2DC418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC418u;
label_2dc418:
    // 0x2dc418: 0x10000005  b           . + 4 + (0x5 << 2)
label_2dc41c:
    if (ctx->pc == 0x2DC41Cu) {
        ctx->pc = 0x2DC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC418u;
        // 0x2dc41c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC420u;
        goto label_2dc420;
    }
    ctx->pc = 0x2DC418u;
    {
        const bool branch_taken_0x2dc418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC418u;
        // 0x2dc41c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc418) {
            ctx->pc = 0x2DC430u;
            goto label_2dc430;
        }
    }
    ctx->pc = 0x2DC420u;
label_2dc420:
    // 0x2dc420: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2dc420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2dc424:
    // 0x2dc424: 0xc09d4d8  jal         func_275360
label_2dc428:
    if (ctx->pc == 0x2DC428u) {
        ctx->pc = 0x2DC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC424u;
        // 0x2dc428: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC42Cu;
        goto label_2dc42c;
    }
    ctx->pc = 0x2DC424u;
    SET_GPR_U32(ctx, 31, 0x2DC42Cu);
    ctx->pc = 0x2DC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC424u;
    // 0x2dc428: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DC424u, 0x2DC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC42Cu;
label_2dc42c:
    // 0x2dc42c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc430:
    // 0x2dc430: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2dc430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2dc434:
    // 0x2dc434: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dc434u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dc438:
    // 0x2dc438: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dc438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dc43c:
    // 0x2dc43c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dc43cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc440:
    // 0x2dc440: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dc440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dc444:
    // 0x2dc444: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dc444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dc448:
    // 0x2dc448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc44c:
    // 0x2dc44c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc450:
    // 0x2dc450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc454:
    // 0x2dc454: 0x3e00008  jr          $ra
label_2dc458:
    if (ctx->pc == 0x2DC458u) {
        ctx->pc = 0x2DC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC454u;
        // 0x2dc458: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC45Cu;
        goto label_fallthrough_0x2dc454;
    }
    ctx->pc = 0x2DC454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC454u;
        // 0x2dc458: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dc454:
    ctx->pc = 0x2DC45Cu;
}
