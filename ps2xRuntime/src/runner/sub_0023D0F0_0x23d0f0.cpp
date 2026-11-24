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

// Function: sub_0023D0F0
// Address: 0x23d0f0 - 0x23d3d4
void sub_0023D0F0_0x23d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D0F0_0x23d0f0");
#endif

    switch (ctx->pc) {
        case 0x23d0f0u: goto label_23d0f0;
        case 0x23d0f4u: goto label_23d0f4;
        case 0x23d0f8u: goto label_23d0f8;
        case 0x23d0fcu: goto label_23d0fc;
        case 0x23d100u: goto label_23d100;
        case 0x23d104u: goto label_23d104;
        case 0x23d108u: goto label_23d108;
        case 0x23d10cu: goto label_23d10c;
        case 0x23d110u: goto label_23d110;
        case 0x23d114u: goto label_23d114;
        case 0x23d118u: goto label_23d118;
        case 0x23d11cu: goto label_23d11c;
        case 0x23d120u: goto label_23d120;
        case 0x23d124u: goto label_23d124;
        case 0x23d128u: goto label_23d128;
        case 0x23d12cu: goto label_23d12c;
        case 0x23d130u: goto label_23d130;
        case 0x23d134u: goto label_23d134;
        case 0x23d138u: goto label_23d138;
        case 0x23d13cu: goto label_23d13c;
        case 0x23d140u: goto label_23d140;
        case 0x23d144u: goto label_23d144;
        case 0x23d148u: goto label_23d148;
        case 0x23d14cu: goto label_23d14c;
        case 0x23d150u: goto label_23d150;
        case 0x23d154u: goto label_23d154;
        case 0x23d158u: goto label_23d158;
        case 0x23d15cu: goto label_23d15c;
        case 0x23d160u: goto label_23d160;
        case 0x23d164u: goto label_23d164;
        case 0x23d168u: goto label_23d168;
        case 0x23d16cu: goto label_23d16c;
        case 0x23d170u: goto label_23d170;
        case 0x23d174u: goto label_23d174;
        case 0x23d178u: goto label_23d178;
        case 0x23d17cu: goto label_23d17c;
        case 0x23d180u: goto label_23d180;
        case 0x23d184u: goto label_23d184;
        case 0x23d188u: goto label_23d188;
        case 0x23d18cu: goto label_23d18c;
        case 0x23d190u: goto label_23d190;
        case 0x23d194u: goto label_23d194;
        case 0x23d198u: goto label_23d198;
        case 0x23d19cu: goto label_23d19c;
        case 0x23d1a0u: goto label_23d1a0;
        case 0x23d1a4u: goto label_23d1a4;
        case 0x23d1a8u: goto label_23d1a8;
        case 0x23d1acu: goto label_23d1ac;
        case 0x23d1b0u: goto label_23d1b0;
        case 0x23d1b4u: goto label_23d1b4;
        case 0x23d1b8u: goto label_23d1b8;
        case 0x23d1bcu: goto label_23d1bc;
        case 0x23d1c0u: goto label_23d1c0;
        case 0x23d1c4u: goto label_23d1c4;
        case 0x23d1c8u: goto label_23d1c8;
        case 0x23d1ccu: goto label_23d1cc;
        case 0x23d1d0u: goto label_23d1d0;
        case 0x23d1d4u: goto label_23d1d4;
        case 0x23d1d8u: goto label_23d1d8;
        case 0x23d1dcu: goto label_23d1dc;
        case 0x23d1e0u: goto label_23d1e0;
        case 0x23d1e4u: goto label_23d1e4;
        case 0x23d1e8u: goto label_23d1e8;
        case 0x23d1ecu: goto label_23d1ec;
        case 0x23d1f0u: goto label_23d1f0;
        case 0x23d1f4u: goto label_23d1f4;
        case 0x23d1f8u: goto label_23d1f8;
        case 0x23d1fcu: goto label_23d1fc;
        case 0x23d200u: goto label_23d200;
        case 0x23d204u: goto label_23d204;
        case 0x23d208u: goto label_23d208;
        case 0x23d20cu: goto label_23d20c;
        case 0x23d210u: goto label_23d210;
        case 0x23d214u: goto label_23d214;
        case 0x23d218u: goto label_23d218;
        case 0x23d21cu: goto label_23d21c;
        case 0x23d220u: goto label_23d220;
        case 0x23d224u: goto label_23d224;
        case 0x23d228u: goto label_23d228;
        case 0x23d22cu: goto label_23d22c;
        case 0x23d230u: goto label_23d230;
        case 0x23d234u: goto label_23d234;
        case 0x23d238u: goto label_23d238;
        case 0x23d23cu: goto label_23d23c;
        case 0x23d240u: goto label_23d240;
        case 0x23d244u: goto label_23d244;
        case 0x23d248u: goto label_23d248;
        case 0x23d24cu: goto label_23d24c;
        case 0x23d250u: goto label_23d250;
        case 0x23d254u: goto label_23d254;
        case 0x23d258u: goto label_23d258;
        case 0x23d25cu: goto label_23d25c;
        case 0x23d260u: goto label_23d260;
        case 0x23d264u: goto label_23d264;
        case 0x23d268u: goto label_23d268;
        case 0x23d26cu: goto label_23d26c;
        case 0x23d270u: goto label_23d270;
        case 0x23d274u: goto label_23d274;
        case 0x23d278u: goto label_23d278;
        case 0x23d27cu: goto label_23d27c;
        case 0x23d280u: goto label_23d280;
        case 0x23d284u: goto label_23d284;
        case 0x23d288u: goto label_23d288;
        case 0x23d28cu: goto label_23d28c;
        case 0x23d290u: goto label_23d290;
        case 0x23d294u: goto label_23d294;
        case 0x23d298u: goto label_23d298;
        case 0x23d29cu: goto label_23d29c;
        case 0x23d2a0u: goto label_23d2a0;
        case 0x23d2a4u: goto label_23d2a4;
        case 0x23d2a8u: goto label_23d2a8;
        case 0x23d2acu: goto label_23d2ac;
        case 0x23d2b0u: goto label_23d2b0;
        case 0x23d2b4u: goto label_23d2b4;
        case 0x23d2b8u: goto label_23d2b8;
        case 0x23d2bcu: goto label_23d2bc;
        case 0x23d2c0u: goto label_23d2c0;
        case 0x23d2c4u: goto label_23d2c4;
        case 0x23d2c8u: goto label_23d2c8;
        case 0x23d2ccu: goto label_23d2cc;
        case 0x23d2d0u: goto label_23d2d0;
        case 0x23d2d4u: goto label_23d2d4;
        case 0x23d2d8u: goto label_23d2d8;
        case 0x23d2dcu: goto label_23d2dc;
        case 0x23d2e0u: goto label_23d2e0;
        case 0x23d2e4u: goto label_23d2e4;
        case 0x23d2e8u: goto label_23d2e8;
        case 0x23d2ecu: goto label_23d2ec;
        case 0x23d2f0u: goto label_23d2f0;
        case 0x23d2f4u: goto label_23d2f4;
        case 0x23d2f8u: goto label_23d2f8;
        case 0x23d2fcu: goto label_23d2fc;
        case 0x23d300u: goto label_23d300;
        case 0x23d304u: goto label_23d304;
        case 0x23d308u: goto label_23d308;
        case 0x23d30cu: goto label_23d30c;
        case 0x23d310u: goto label_23d310;
        case 0x23d314u: goto label_23d314;
        case 0x23d318u: goto label_23d318;
        case 0x23d31cu: goto label_23d31c;
        case 0x23d320u: goto label_23d320;
        case 0x23d324u: goto label_23d324;
        case 0x23d328u: goto label_23d328;
        case 0x23d32cu: goto label_23d32c;
        case 0x23d330u: goto label_23d330;
        case 0x23d334u: goto label_23d334;
        case 0x23d338u: goto label_23d338;
        case 0x23d33cu: goto label_23d33c;
        case 0x23d340u: goto label_23d340;
        case 0x23d344u: goto label_23d344;
        case 0x23d348u: goto label_23d348;
        case 0x23d34cu: goto label_23d34c;
        case 0x23d350u: goto label_23d350;
        case 0x23d354u: goto label_23d354;
        case 0x23d358u: goto label_23d358;
        case 0x23d35cu: goto label_23d35c;
        case 0x23d360u: goto label_23d360;
        case 0x23d364u: goto label_23d364;
        case 0x23d368u: goto label_23d368;
        case 0x23d36cu: goto label_23d36c;
        case 0x23d370u: goto label_23d370;
        case 0x23d374u: goto label_23d374;
        case 0x23d378u: goto label_23d378;
        case 0x23d37cu: goto label_23d37c;
        case 0x23d380u: goto label_23d380;
        case 0x23d384u: goto label_23d384;
        case 0x23d388u: goto label_23d388;
        case 0x23d38cu: goto label_23d38c;
        case 0x23d390u: goto label_23d390;
        case 0x23d394u: goto label_23d394;
        case 0x23d398u: goto label_23d398;
        case 0x23d39cu: goto label_23d39c;
        case 0x23d3a0u: goto label_23d3a0;
        case 0x23d3a4u: goto label_23d3a4;
        case 0x23d3a8u: goto label_23d3a8;
        case 0x23d3acu: goto label_23d3ac;
        case 0x23d3b0u: goto label_23d3b0;
        case 0x23d3b4u: goto label_23d3b4;
        case 0x23d3b8u: goto label_23d3b8;
        case 0x23d3bcu: goto label_23d3bc;
        case 0x23d3c0u: goto label_23d3c0;
        case 0x23d3c4u: goto label_23d3c4;
        case 0x23d3c8u: goto label_23d3c8;
        case 0x23d3ccu: goto label_23d3cc;
        case 0x23d3d0u: goto label_23d3d0;
        default: break;
    }

    ctx->pc = 0x23d0f0u;

label_23d0f0:
    // 0x23d0f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23d0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_23d0f4:
    // 0x23d0f4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x23d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_23d0f8:
    // 0x23d0f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23d0f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d0fc:
    // 0x23d0fc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x23d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_23d100:
    // 0x23d100: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x23d100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_23d104:
    // 0x23d104: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x23d104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_23d108:
    // 0x23d108: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x23d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_23d10c:
    // 0x23d10c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x23d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_23d110:
    // 0x23d110: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x23d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_23d114:
    // 0x23d114: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x23d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_23d118:
    // 0x23d118: 0x82820098  lb          $v0, 0x98($s4)
    ctx->pc = 0x23d118u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
label_23d11c:
    // 0x23d11c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x23d11cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23d120:
    // 0x23d120: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_23d124:
    if (ctx->pc == 0x23D124u) {
        ctx->pc = 0x23D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D120u;
        // 0x23d124: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D128u;
        goto label_23d128;
    }
    ctx->pc = 0x23D120u;
    {
        const bool branch_taken_0x23d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D120u;
        // 0x23d124: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d120) {
            ctx->pc = 0x23D3ACu;
            goto label_23d3ac;
        }
    }
    ctx->pc = 0x23D128u;
label_23d128:
    // 0x23d128: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d12c:
    // 0x23d12c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x23d12cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_23d130:
    // 0x23d130: 0xa7a00042  sh          $zero, 0x42($sp)
    ctx->pc = 0x23d130u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
label_23d134:
    // 0x23d134: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x23d134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d138:
    // 0x23d138: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x23d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_23d13c:
    // 0x23d13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d140:
    // 0x23d140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23d140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d144:
    // 0x23d144: 0x60f809  jalr        $v1
label_23d148:
    if (ctx->pc == 0x23D148u) {
        ctx->pc = 0x23D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D144u;
        // 0x23d148: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D14Cu;
        goto label_23d14c;
    }
    ctx->pc = 0x23D144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23D14Cu);
        ctx->pc = 0x23D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D144u;
        // 0x23d148: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D144u, 0x23D14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D14Cu;
label_23d14c:
    // 0x23d14c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d150:
    // 0x23d150: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x23d150u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23d154:
    // 0x23d154: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x23d154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_23d158:
    // 0x23d158: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x23d158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_23d15c:
    // 0x23d15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d160:
    // 0x23d160: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d164:
    // 0x23d164: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23d164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_23d168:
    // 0x23d168: 0x60f809  jalr        $v1
label_23d16c:
    if (ctx->pc == 0x23D16Cu) {
        ctx->pc = 0x23D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D168u;
        // 0x23d16c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D170u;
        goto label_23d170;
    }
    ctx->pc = 0x23D168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23D170u);
        ctx->pc = 0x23D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D168u;
        // 0x23d16c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D168u, 0x23D170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D170u;
label_23d170:
    // 0x23d170: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x23d170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_23d174:
    // 0x23d174: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23d174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23d178:
    // 0x23d178: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23d17c:
    // 0x23d17c: 0xc08b7f8  jal         func_22DFE0
label_23d180:
    if (ctx->pc == 0x23D180u) {
        ctx->pc = 0x23D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D17Cu;
        // 0x23d180: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D184u;
        goto label_23d184;
    }
    ctx->pc = 0x23D17Cu;
    SET_GPR_U32(ctx, 31, 0x23D184u);
    ctx->pc = 0x23D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D17Cu;
    // 0x23d180: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DFE0u, 0x23D17Cu, 0x23D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D184u;
label_23d184:
    // 0x23d184: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_23d188:
    if (ctx->pc == 0x23D188u) {
        ctx->pc = 0x23D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D184u;
        // 0x23d188: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D18Cu;
        goto label_23d18c;
    }
    ctx->pc = 0x23D184u;
    {
        const bool branch_taken_0x23d184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D184u;
        // 0x23d188: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d184) {
            ctx->pc = 0x23D1D0u;
            goto label_23d1d0;
        }
    }
    ctx->pc = 0x23D18Cu;
label_23d18c:
    // 0x23d18c: 0xc08efaa  jal         func_23BEA8
label_23d190:
    if (ctx->pc == 0x23D190u) {
        ctx->pc = 0x23D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D18Cu;
        // 0x23d190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D194u;
        goto label_23d194;
    }
    ctx->pc = 0x23D18Cu;
    SET_GPR_U32(ctx, 31, 0x23D194u);
    ctx->pc = 0x23D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D18Cu;
    // 0x23d190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BEA8u, 0x23D18Cu, 0x23D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D194u;
label_23d194:
    // 0x23d194: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d198:
    // 0x23d198: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23d198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23d19c:
    // 0x23d19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d1a0:
    // 0x23d1a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23d1a4:
    // 0x23d1a4: 0x40f809  jalr        $v0
label_23d1a8:
    if (ctx->pc == 0x23D1A8u) {
        ctx->pc = 0x23D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1A4u;
        // 0x23d1a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1ACu;
        goto label_23d1ac;
    }
    ctx->pc = 0x23D1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D1ACu);
        ctx->pc = 0x23D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1A4u;
        // 0x23d1a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D1A4u, 0x23D1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D1ACu;
label_23d1ac:
    // 0x23d1ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d1b0:
    // 0x23d1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d1b4:
    // 0x23d1b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23d1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d1b8:
    // 0x23d1b8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23d1bc:
    // 0x23d1bc: 0x40f809  jalr        $v0
label_23d1c0:
    if (ctx->pc == 0x23D1C0u) {
        ctx->pc = 0x23D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1BCu;
        // 0x23d1c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1C4u;
        goto label_23d1c4;
    }
    ctx->pc = 0x23D1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D1C4u);
        ctx->pc = 0x23D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1BCu;
        // 0x23d1c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D1BCu, 0x23D1C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D1C4u;
label_23d1c4:
    // 0x23d1c4: 0x1000007a  b           . + 4 + (0x7A << 2)
label_23d1c8:
    if (ctx->pc == 0x23D1C8u) {
        ctx->pc = 0x23D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1C4u;
        // 0x23d1c8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1CCu;
        goto label_23d1cc;
    }
    ctx->pc = 0x23D1C4u;
    {
        const bool branch_taken_0x23d1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1C4u;
        // 0x23d1c8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1c4) {
            ctx->pc = 0x23D3B0u;
            goto label_23d3b0;
        }
    }
    ctx->pc = 0x23D1CCu;
label_23d1cc:
    // 0x23d1cc: 0x0  nop
    ctx->pc = 0x23d1ccu;
    // NOP
label_23d1d0:
    // 0x23d1d0: 0x87b00040  lh          $s0, 0x40($sp)
    ctx->pc = 0x23d1d0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_23d1d4:
    // 0x23d1d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23d1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d1d8:
    // 0x23d1d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23d1dc:
    // 0x23d1dc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23d1e0:
    // 0x23d1e0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x23d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_23d1e4:
    // 0x23d1e4: 0xc08b590  jal         func_22D640
label_23d1e8:
    if (ctx->pc == 0x23D1E8u) {
        ctx->pc = 0x23D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1E4u;
        // 0x23d1e8: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1ECu;
        goto label_23d1ec;
    }
    ctx->pc = 0x23D1E4u;
    SET_GPR_U32(ctx, 31, 0x23D1ECu);
    ctx->pc = 0x23D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1E4u;
    // 0x23d1e8: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D640u, 0x23D1E4u, 0x23D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1ECu;
label_23d1ec:
    // 0x23d1ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23d1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d1f0:
    // 0x23d1f0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_23d1f4:
    if (ctx->pc == 0x23D1F4u) {
        ctx->pc = 0x23D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1F0u;
        // 0x23d1f4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1F8u;
        goto label_23d1f8;
    }
    ctx->pc = 0x23D1F0u;
    {
        const bool branch_taken_0x23d1f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1F0u;
        // 0x23d1f4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1f0) {
            ctx->pc = 0x23D20Cu;
            goto label_23d20c;
        }
    }
    ctx->pc = 0x23D1F8u;
label_23d1f8:
    // 0x23d1f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23d1fc:
    // 0x23d1fc: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_23d200:
    // 0x23d200: 0xc08b590  jal         func_22D640
label_23d204:
    if (ctx->pc == 0x23D204u) {
        ctx->pc = 0x23D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D200u;
        // 0x23d204: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D208u;
        goto label_23d208;
    }
    ctx->pc = 0x23D200u;
    SET_GPR_U32(ctx, 31, 0x23D208u);
    ctx->pc = 0x23D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D200u;
    // 0x23d204: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D640u, 0x23D200u, 0x23D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D208u;
label_23d208:
    // 0x23d208: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d20c:
    // 0x23d20c: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x23d20cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_23d210:
    // 0x23d210: 0x87b60042  lh          $s6, 0x42($sp)
    ctx->pc = 0x23d210u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
label_23d214:
    // 0x23d214: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_23d218:
    if (ctx->pc == 0x23D218u) {
        ctx->pc = 0x23D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D214u;
        // 0x23d218: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D21Cu;
        goto label_23d21c;
    }
    ctx->pc = 0x23D214u;
    {
        const bool branch_taken_0x23d214 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D214u;
        // 0x23d218: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d214) {
            ctx->pc = 0x23D258u;
            goto label_23d258;
        }
    }
    ctx->pc = 0x23D21Cu;
label_23d21c:
    // 0x23d21c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_23d220:
    if (ctx->pc == 0x23D220u) {
        ctx->pc = 0x23D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D21Cu;
        // 0x23d220: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D224u;
        goto label_23d224;
    }
    ctx->pc = 0x23D21Cu;
    {
        const bool branch_taken_0x23d21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D21Cu;
        // 0x23d220: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d21c) {
            ctx->pc = 0x23D2C0u;
            goto label_23d2c0;
        }
    }
    ctx->pc = 0x23D224u;
label_23d224:
    // 0x23d224: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d228:
    // 0x23d228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d22c:
    // 0x23d22c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23d230:
    // 0x23d230: 0x40f809  jalr        $v0
label_23d234:
    if (ctx->pc == 0x23D234u) {
        ctx->pc = 0x23D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D230u;
        // 0x23d234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D238u;
        goto label_23d238;
    }
    ctx->pc = 0x23D230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D238u);
        ctx->pc = 0x23D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D230u;
        // 0x23d234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D230u, 0x23D238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D238u;
label_23d238:
    // 0x23d238: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d23c:
    // 0x23d23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d240:
    // 0x23d240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23d240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d244:
    // 0x23d244: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23d248:
    // 0x23d248: 0x40f809  jalr        $v0
label_23d24c:
    if (ctx->pc == 0x23D24Cu) {
        ctx->pc = 0x23D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D248u;
        // 0x23d24c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D250u;
        goto label_23d250;
    }
    ctx->pc = 0x23D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D250u);
        ctx->pc = 0x23D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D248u;
        // 0x23d24c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D248u, 0x23D250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D250u;
label_23d250:
    // 0x23d250: 0x10000044  b           . + 4 + (0x44 << 2)
label_23d254:
    if (ctx->pc == 0x23D254u) {
        ctx->pc = 0x23D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D250u;
        // 0x23d254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D258u;
        goto label_23d258;
    }
    ctx->pc = 0x23D250u;
    {
        const bool branch_taken_0x23d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D250u;
        // 0x23d254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d250) {
            ctx->pc = 0x23D364u;
            goto label_23d364;
        }
    }
    ctx->pc = 0x23D258u;
label_23d258:
    // 0x23d258: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d25c:
    // 0x23d25c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23d25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23d260:
    // 0x23d260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d264:
    // 0x23d264: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23d268:
    // 0x23d268: 0x40f809  jalr        $v0
label_23d26c:
    if (ctx->pc == 0x23D26Cu) {
        ctx->pc = 0x23D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D268u;
        // 0x23d26c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D270u;
        goto label_23d270;
    }
    ctx->pc = 0x23D268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D270u);
        ctx->pc = 0x23D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D268u;
        // 0x23d26c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D268u, 0x23D270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D270u;
label_23d270:
    // 0x23d270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d274:
    // 0x23d274: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x23d274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23d278:
    // 0x23d278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d27c:
    // 0x23d27c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23d27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d280:
    // 0x23d280: 0xc094854  jal         func_252150
label_23d284:
    if (ctx->pc == 0x23D284u) {
        ctx->pc = 0x23D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D280u;
        // 0x23d284: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D288u;
        goto label_23d288;
    }
    ctx->pc = 0x23D280u;
    SET_GPR_U32(ctx, 31, 0x23D288u);
    ctx->pc = 0x23D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D280u;
    // 0x23d284: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x23D280u, 0x23D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D288u;
label_23d288:
    // 0x23d288: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d28c:
    // 0x23d28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d290:
    // 0x23d290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23d290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d294:
    // 0x23d294: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23d294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23d298:
    // 0x23d298: 0x40f809  jalr        $v0
label_23d29c:
    if (ctx->pc == 0x23D29Cu) {
        ctx->pc = 0x23D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D298u;
        // 0x23d29c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2A0u;
        goto label_23d2a0;
    }
    ctx->pc = 0x23D298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D2A0u);
        ctx->pc = 0x23D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D298u;
        // 0x23d29c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D298u, 0x23D2A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D2A0u;
label_23d2a0:
    // 0x23d2a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d2a4:
    // 0x23d2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d2a8:
    // 0x23d2a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23d2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d2ac:
    // 0x23d2ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23d2b0:
    // 0x23d2b0: 0x40f809  jalr        $v0
label_23d2b4:
    if (ctx->pc == 0x23D2B4u) {
        ctx->pc = 0x23D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2B0u;
        // 0x23d2b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2B8u;
        goto label_23d2b8;
    }
    ctx->pc = 0x23D2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D2B8u);
        ctx->pc = 0x23D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2B0u;
        // 0x23d2b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D2B0u, 0x23D2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D2B8u;
label_23d2b8:
    // 0x23d2b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_23d2bc:
    if (ctx->pc == 0x23D2BCu) {
        ctx->pc = 0x23D2C0u;
        goto label_23d2c0;
    }
    ctx->pc = 0x23D2B8u;
    {
        const bool branch_taken_0x23d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d2b8) {
            ctx->pc = 0x23D320u;
            goto label_23d320;
        }
    }
    ctx->pc = 0x23D2C0u;
label_23d2c0:
    // 0x23d2c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d2c4:
    // 0x23d2c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23d2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d2c8:
    // 0x23d2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d2cc:
    // 0x23d2cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23d2d0:
    // 0x23d2d0: 0x40f809  jalr        $v0
label_23d2d4:
    if (ctx->pc == 0x23D2D4u) {
        ctx->pc = 0x23D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2D0u;
        // 0x23d2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2D8u;
        goto label_23d2d8;
    }
    ctx->pc = 0x23D2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D2D8u);
        ctx->pc = 0x23D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2D0u;
        // 0x23d2d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D2D0u, 0x23D2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D2D8u;
label_23d2d8:
    // 0x23d2d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23d2dc:
    // 0x23d2dc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x23d2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23d2e0:
    // 0x23d2e0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23d2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23d2e4:
    // 0x23d2e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23d2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23d2e8:
    // 0x23d2e8: 0xc094854  jal         func_252150
label_23d2ec:
    if (ctx->pc == 0x23D2ECu) {
        ctx->pc = 0x23D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2E8u;
        // 0x23d2ec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2F0u;
        goto label_23d2f0;
    }
    ctx->pc = 0x23D2E8u;
    SET_GPR_U32(ctx, 31, 0x23D2F0u);
    ctx->pc = 0x23D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2E8u;
    // 0x23d2ec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x23D2E8u, 0x23D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2F0u;
label_23d2f0:
    // 0x23d2f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d2f4:
    // 0x23d2f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23d2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23d2f8:
    // 0x23d2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d2fc:
    // 0x23d2fc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23d300:
    // 0x23d300: 0x40f809  jalr        $v0
label_23d304:
    if (ctx->pc == 0x23D304u) {
        ctx->pc = 0x23D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D300u;
        // 0x23d304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D308u;
        goto label_23d308;
    }
    ctx->pc = 0x23D300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D308u);
        ctx->pc = 0x23D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D300u;
        // 0x23d304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D300u, 0x23D308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D308u;
label_23d308:
    // 0x23d308: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23d30c:
    // 0x23d30c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d310:
    // 0x23d310: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23d310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d314:
    // 0x23d314: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23d318:
    // 0x23d318: 0x40f809  jalr        $v0
label_23d31c:
    if (ctx->pc == 0x23D31Cu) {
        ctx->pc = 0x23D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D318u;
        // 0x23d31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D320u;
        goto label_23d320;
    }
    ctx->pc = 0x23D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D320u);
        ctx->pc = 0x23D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D318u;
        // 0x23d31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D318u, 0x23D320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D320u;
label_23d320:
    // 0x23d320: 0xc08da9c  jal         func_236A70
label_23d324:
    if (ctx->pc == 0x23D324u) {
        ctx->pc = 0x23D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D320u;
        // 0x23d324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D328u;
        goto label_23d328;
    }
    ctx->pc = 0x23D320u;
    SET_GPR_U32(ctx, 31, 0x23D328u);
    ctx->pc = 0x23D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D320u;
    // 0x23d324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A70u, 0x23D320u, 0x23D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D328u;
label_23d328:
    // 0x23d328: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x23d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_23d32c:
    // 0x23d32c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d330:
    // 0x23d330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23d334:
    // 0x23d334: 0xc08d6f0  jal         func_235BC0
label_23d338:
    if (ctx->pc == 0x23D338u) {
        ctx->pc = 0x23D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D334u;
        // 0x23d338: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D33Cu;
        goto label_23d33c;
    }
    ctx->pc = 0x23D334u;
    SET_GPR_U32(ctx, 31, 0x23D33Cu);
    ctx->pc = 0x23D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D334u;
    // 0x23d338: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235BC0u, 0x23D334u, 0x23D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D33Cu;
label_23d33c:
    // 0x23d33c: 0xc08d6e4  jal         func_235B90
label_23d340:
    if (ctx->pc == 0x23D340u) {
        ctx->pc = 0x23D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D33Cu;
        // 0x23d340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D344u;
        goto label_23d344;
    }
    ctx->pc = 0x23D33Cu;
    SET_GPR_U32(ctx, 31, 0x23D344u);
    ctx->pc = 0x23D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D33Cu;
    // 0x23d340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B90u, 0x23D33Cu, 0x23D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D344u;
label_23d344:
    // 0x23d344: 0xc08d9b4  jal         func_2366D0
label_23d348:
    if (ctx->pc == 0x23D348u) {
        ctx->pc = 0x23D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D344u;
        // 0x23d348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D34Cu;
        goto label_23d34c;
    }
    ctx->pc = 0x23D344u;
    SET_GPR_U32(ctx, 31, 0x23D34Cu);
    ctx->pc = 0x23D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D344u;
    // 0x23d348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366D0u, 0x23D344u, 0x23D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D34Cu;
label_23d34c:
    // 0x23d34c: 0xc08d6b2  jal         func_235AC8
label_23d350:
    if (ctx->pc == 0x23D350u) {
        ctx->pc = 0x23D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D34Cu;
        // 0x23d350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D354u;
        goto label_23d354;
    }
    ctx->pc = 0x23D34Cu;
    SET_GPR_U32(ctx, 31, 0x23D354u);
    ctx->pc = 0x23D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D34Cu;
    // 0x23d350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AC8u, 0x23D34Cu, 0x23D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D354u;
label_23d354:
    // 0x23d354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23d358:
    // 0x23d358: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_23d35c:
    if (ctx->pc == 0x23D35Cu) {
        ctx->pc = 0x23D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D358u;
        // 0x23d35c: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D360u;
        goto label_23d360;
    }
    ctx->pc = 0x23D358u;
    {
        const bool branch_taken_0x23d358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23d358) {
            ctx->pc = 0x23D35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D358u;
            // 0x23d35c: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D378u;
            goto label_23d378;
        }
    }
    ctx->pc = 0x23D360u;
label_23d360:
    // 0x23d360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23d364:
    // 0x23d364: 0xc08efaa  jal         func_23BEA8
label_23d368:
    if (ctx->pc == 0x23D368u) {
        ctx->pc = 0x23D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D364u;
        // 0x23d368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D36Cu;
        goto label_23d36c;
    }
    ctx->pc = 0x23D364u;
    SET_GPR_U32(ctx, 31, 0x23D36Cu);
    ctx->pc = 0x23D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D364u;
    // 0x23d368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BEA8u, 0x23D364u, 0x23D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D36Cu;
label_23d36c:
    // 0x23d36c: 0x10000010  b           . + 4 + (0x10 << 2)
label_23d370:
    if (ctx->pc == 0x23D370u) {
        ctx->pc = 0x23D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D36Cu;
        // 0x23d370: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D374u;
        goto label_23d374;
    }
    ctx->pc = 0x23D36Cu;
    {
        const bool branch_taken_0x23d36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D36Cu;
        // 0x23d370: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d36c) {
            ctx->pc = 0x23D3B0u;
            goto label_23d3b0;
        }
    }
    ctx->pc = 0x23D374u;
label_23d374:
    // 0x23d374: 0x0  nop
    ctx->pc = 0x23d374u;
    // NOP
label_23d378:
    // 0x23d378: 0xc08d6c8  jal         func_235B20
label_23d37c:
    if (ctx->pc == 0x23D37Cu) {
        ctx->pc = 0x23D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D378u;
        // 0x23d37c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D380u;
        goto label_23d380;
    }
    ctx->pc = 0x23D378u;
    SET_GPR_U32(ctx, 31, 0x23D380u);
    ctx->pc = 0x23D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D378u;
    // 0x23d37c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B20u, 0x23D378u, 0x23D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D380u;
label_23d380:
    // 0x23d380: 0xc08db20  jal         func_236C80
label_23d384:
    if (ctx->pc == 0x23D384u) {
        ctx->pc = 0x23D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D380u;
        // 0x23d384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D388u;
        goto label_23d388;
    }
    ctx->pc = 0x23D380u;
    SET_GPR_U32(ctx, 31, 0x23D388u);
    ctx->pc = 0x23D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D380u;
    // 0x23d384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x23D380u, 0x23D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D388u;
label_23d388:
    // 0x23d388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d38c:
    // 0x23d38c: 0xc08daf0  jal         func_236BC0
label_23d390:
    if (ctx->pc == 0x23D390u) {
        ctx->pc = 0x23D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D38Cu;
        // 0x23d390: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D394u;
        goto label_23d394;
    }
    ctx->pc = 0x23D38Cu;
    SET_GPR_U32(ctx, 31, 0x23D394u);
    ctx->pc = 0x23D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D38Cu;
    // 0x23d390: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x23D38Cu, 0x23D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D394u;
label_23d394:
    // 0x23d394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d398:
    // 0x23d398: 0xc08daf8  jal         func_236BE0
label_23d39c:
    if (ctx->pc == 0x23D39Cu) {
        ctx->pc = 0x23D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D398u;
        // 0x23d39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3A0u;
        goto label_23d3a0;
    }
    ctx->pc = 0x23D398u;
    SET_GPR_U32(ctx, 31, 0x23D3A0u);
    ctx->pc = 0x23D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D398u;
    // 0x23d39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x23D398u, 0x23D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3A0u;
label_23d3a0:
    // 0x23d3a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d3a4:
    // 0x23d3a4: 0xc08daf4  jal         func_236BD0
label_23d3a8:
    if (ctx->pc == 0x23D3A8u) {
        ctx->pc = 0x23D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3A4u;
        // 0x23d3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3ACu;
        goto label_23d3ac;
    }
    ctx->pc = 0x23D3A4u;
    SET_GPR_U32(ctx, 31, 0x23D3ACu);
    ctx->pc = 0x23D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3A4u;
    // 0x23d3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BD0u, 0x23D3A4u, 0x23D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3ACu;
label_23d3ac:
    // 0x23d3ac: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x23d3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23d3b0:
    // 0x23d3b0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x23d3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_23d3b4:
    // 0x23d3b4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x23d3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23d3b8:
    // 0x23d3b8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x23d3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_23d3bc:
    // 0x23d3bc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x23d3bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23d3c0:
    // 0x23d3c0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x23d3c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_23d3c4:
    // 0x23d3c4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x23d3c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23d3c8:
    // 0x23d3c8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x23d3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_23d3cc:
    // 0x23d3cc: 0x3e00008  jr          $ra
label_23d3d0:
    if (ctx->pc == 0x23D3D0u) {
        ctx->pc = 0x23D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3CCu;
        // 0x23d3d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3D4u;
        goto label_fallthrough_0x23d3cc;
    }
    ctx->pc = 0x23D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3CCu;
        // 0x23d3d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23d3cc:
    ctx->pc = 0x23D3D4u;
}
